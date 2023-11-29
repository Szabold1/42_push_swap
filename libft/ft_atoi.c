/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:36:36 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/07 13:36:38 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i + 1] >= 48 && str[i + 1] <= 57))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *str1 = " 		 +482 ;lg";
	char *str2 = " 	-=+ 271333";
	char *str3 = "-2147483648";
	int res1o = atoi(str1);
	int res1 = ft_atoi(str1);
	int res2o = atoi(str2);
	int res2 = ft_atoi(str2);
	int res3o = atoi(str3);
	int res3 = ft_atoi(str3);
	printf("%d | original\n", res1o);
	printf("%d\n", res1);
	printf("%d | original\n", res2o);
	printf("%d\n", res2);
	printf("%d | original\n", res3o);
	printf("%d\n", res3);
	return (0);
}
*/
