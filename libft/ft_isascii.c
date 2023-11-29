/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:39:00 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/05 11:41:22 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int c1 = '5';
	int c2 = 't';
	int c3 = 'E';
	int c4 = '!';
	int res1 = ft_isascii(c1);
	int res2 = ft_isascii(c2);
	int res3 = ft_isascii(c3);
	int res4 = ft_isascii(c4);
	printf("%c | %d\n", c1, res1);
	printf("%c | %d\n", c2, res2);
	printf("%c | %d\n", c3, res3);
	printf("%c | %d\n", c4, res4);
	return (0);
}
*/
