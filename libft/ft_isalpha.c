/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:18:56 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/04 14:36:44 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int c = 'j';
	int c2 = '5';
	int res = ft_isalpha(c);
	int res2 = ft_isalpha(c2);
	printf("%c | %d\n", c, res);
	printf("%c | %d\n", c2, res2);
	return (0);
}
*/
