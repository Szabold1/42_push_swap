/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:42:37 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/04 14:54:53 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int c = '9';
	int c2 = 'e';
	int res = ft_isdigit(c);
	int res2 = ft_isdigit(c2);
	printf("%c | %d\n", c, res);
	printf("%c | %d\n", c2, res2);
	return (0);
}
*/
