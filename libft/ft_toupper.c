/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:32:43 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/05 12:57:22 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c1 = 100;
	int	c2 = 70;
	int	c3 = 125;
	int res1 = ft_toupper(c1);
	int res2 = ft_toupper(c2);
	int res3 = ft_toupper(c3);
	printf("%c | %c\n", c1, res1);
	printf("%c | %c\n", c2, res2);
	printf("%c | %c\n", c3, res3);
	return (0);
}
*/
