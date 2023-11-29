/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:03:58 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/05 12:12:35 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[20] = "abcd";
	//char dest2[20] = "abcd";
	char src[20] = "testing";
	//char src2[20] = "testing";
	printf("dest before copying: %s\n", dest);
	//printf("dest before copying: %s | original\n", dest2);
	size_t result = ft_strlcpy(dest, src, 7);
	//size_t result2 = strlcpy(dest2, src2, 7);
	printf("dest after copying: %s\n", dest);
	//printf("dest after copying: %s | original\n", dest2);
	printf("length of src(%s): %zu\n", src, result);
	//printf("length of src(%s): %zu | original\n", src2, result2);
	return (0);
}
*/
