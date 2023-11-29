/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:49:52 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/05 14:11:44 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[10] = "test";
	printf("before: %s\n", str);
	ft_memset(str + 2, '.', 3);
	printf("after: %s\n", str);
	return (0);
}
*/
