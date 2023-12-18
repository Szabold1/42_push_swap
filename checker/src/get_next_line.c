/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:55:07 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 12:55:14 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

// read from fd into str until there is a new line
static char	*handle_read(int fd, char *str)
{
	char	*temp;
	int		bytes_read;

	temp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(str, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(temp);
			return (NULL);
		}
		temp[bytes_read] = '\0';
		str = join_strs(str, temp);
	}
	free(temp);
	return (str);
}

// return a string until \n or end of string is reached
static char	*get_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

// return the string after \n
static char	*handle_rest(char *str)
{
	int		i;
	int		j;
	char	*rest;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	rest = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!rest)
	{
		free(str);
		return (NULL);
	}
	i++;
	j = 0;
	while (str[i])
		rest[j++] = str[i++];
	rest[j] = '\0';
	free(str);
	return (rest);
}

// read from file descriptor fd and return the next line
// 1. read from fd into str until there is a new line
// 2. save string until \n into line
// 3. update str to the string after \n
// when function gets called again, it will remember str because of static
char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = handle_read(fd, str);
	if (!str)
		return (NULL);
	line = get_line(str);
	if (!line)
	{
		free(str);
		return (NULL);
	}
	str = handle_rest(str);
	if (!str)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
