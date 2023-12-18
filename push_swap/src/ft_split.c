/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:52:25 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 09:53:57 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// copy src string to dest string
static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// count number of substrings
static int	count_substr(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
		else if (str[i] == c)
			i++;
	}
	return (count);
}

// free strings array if malloc fails
static int	handle_err(int str_index, char **strings)
{
	if (strings[str_index] == NULL)
	{
		while (str_index >= 0)
			free(strings[str_index--]);
		free(strings);
		return (0);
	}
	return (1);
}

// fill strings array with substrings
static int	handle_substr(char const *str, char c, char **strings)
{
	int		i;
	int		j;
	int		str_index;
	char	sub_str[10000];

	i = 0;
	str_index = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != c && str[i])
			sub_str[j++] = str[i++];
		if (j > 0)
		{
			sub_str[j] = '\0';
			strings[str_index] = malloc(sizeof(char) * (j + 1));
			if (handle_err(str_index, strings) == 0)
				return (0);
			ft_strcpy(strings[str_index], sub_str);
			str_index++;
		}
		if (str[i] == c && str[i])
			i++;
	}
	return (1);
}

// split string into substrings using char c as delimiter
char	**ft_split(char const *str, char c)
{
	char	**strings;
	int		substrings;

	if (str == NULL)
		return (NULL);
	substrings = count_substr(str, c);
	strings = (char **)malloc(sizeof(char *) * (substrings + 1));
	if (strings == NULL || handle_substr(str, c, strings) == 0)
		return (NULL);
	if (substrings == 0)
	{
		strings[0] = NULL;
		return (strings);
	}
	strings[substrings] = NULL;
	return (strings);
}
