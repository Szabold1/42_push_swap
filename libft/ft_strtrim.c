/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:53:21 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/10 10:56:16 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static void	calc_trim(int *start, int *cpylen, char const *str, char const *set)
{
	int	strlen;
	int	i;

	strlen = (int)ft_strlen(str);
	i = 0;
	while (is_in_set(str[i], set))
		i++;
	if (i == strlen)
	{
		*start = 0;
		*cpylen = 0;
		return ;
	}
	*start = i;
	i = 0;
	while (is_in_set(str[strlen - i - 1], set))
		i++;
	*cpylen = (strlen - i) - *start;
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		cpylen;
	char	*cpy;
	int		i;

	start = 0;
	cpylen = 0;
	i = 0;
	calc_trim(&start, &cpylen, str, set);
	cpy = (char *)malloc((cpylen + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (i < cpylen)
	{
		cpy[i] = str[start];
		i++;
		start++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
#include <stdio.h>
int main(void)
{
	// char *str = "-  ++ ---hello world!- -+-+- -";
	char *str = "   xxx   xxx";
	// char *set = "- +";
	char *set = " x";
	char *res = ft_strtrim(str, set);
	printf("str: %s\ntrim: %s\nresult: %s\n", str, set, res);
	free(res);
	return (0);
}
*/
