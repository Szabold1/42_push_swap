/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:53:05 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/05 12:57:10 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
    int c1 = 70;
    int c2 = 100;
    int c3 = 125;
    int res1 = ft_tolower(c1);
    int res2 = ft_tolower(c2);
    int res3 = ft_tolower(c3);
    printf("%c | %c\n", c1, res1);
    printf("%c | %c\n", c2, res2);
    printf("%c | %c\n", c3, res3);
    return (0);
}
*/
