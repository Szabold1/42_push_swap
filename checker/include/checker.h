/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:50:31 by bszabo            #+#    #+#             */
/*   Updated: 2024/02/26 21:10:54 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include "../../push_swap/include/push_swap.h"

// FILE: get_next_line_utils.c
char	*ft_strchr(char *str, char c);
int		ft_strlen(char *str);
int		ft_strlcpy(char *src, char *dest, int size);
char	*ft_strdup(char *src);
char	*gnl_strjoin(char *s1, char *s2);

// FILE: get_next_line.c
char	*get_next_line(int fd);

#endif
