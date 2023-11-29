/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:59:37 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/12 10:01:28 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
char	odd_tounderscore(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ('_');
	return (c);
}

int main(void)
{
	char *s = "guess what 12345";
	char *res = ft_strmapi(s, odd_tounderscore);
	printf("%s\n", s);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/
