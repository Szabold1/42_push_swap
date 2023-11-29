/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:10:56 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/07 12:12:47 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*c_dest;
	const char	*c_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	c_dest = (char *)dest;
	c_src = (const char *)src;
	if (c_src == c_dest)
		return (dest);
	if (c_src < c_dest)
	{
		while (n > 0)
		{
			c_dest[n - 1] = c_src[n - 1];
			n--;
		}
	}
	while (n > 0)
	{
		*c_dest = *c_src;
		c_dest++;
		c_src++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src1[] = "Hello World!";
    char dest1[20];
    ft_memmove(dest1, src1 + 6, 10);
    printf("src1 = %s\n", src1);
    printf("dest1 = %s\n", dest1);

	char src2[] = "123456";
	ft_memmove(src2, src2 + 2, 4);
	printf("src2 = %s\n", src2);
    return (0);
}
*/
