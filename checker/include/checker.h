/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:50:31 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 12:50:51 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include "../../push_swap/include/push_swap.h"

char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
char	*join_strs(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
