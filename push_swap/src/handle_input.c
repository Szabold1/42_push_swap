/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:55:02 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 09:58:59 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// convert string to number with error checking
static long	str_to_num(const char *str)
{
	long long int	num;
	int				sign;

	num = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-' || *str == '+')
		&& (*(str + 1) >= 48 && *(str + 1) <= 57))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57) || num == 1844674407370955161)
			handle_error();
		num = num * 10 + (*str - 48);
		str++;
	}
	return (num * sign);
}

// fill stack a if input is string
static t_stack	*handle_str_input(char *str)
{
	int		i;
	long	num;
	char	**tmp;
	t_stack	*stack_a;

	i = 0;
	stack_a = NULL;
	tmp = ft_split(str, ' ');
	if (tmp == NULL)
		handle_error();
	while (tmp[i])
	{
		num = str_to_num(tmp[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			free_stack(&stack_a);
			free_str_arr(tmp);
			handle_error();
		}
		stack_add_back(&stack_a, stack_new_node(num));
		i++;
	}
	free_str_arr(tmp);
	return (stack_a);
}

// fill stack a if input is integer
static t_stack	*handle_int_input(int argc, char *argv[])
{
	int		i;
	long	num;
	t_stack	*stack_a;

	i = 1;
	stack_a = NULL;
	while (i < argc)
	{
		num = str_to_num(argv[i]);
		if (num > INT_MAX || num < INT_MIN || *(argv[i]) == '\0')
		{
			free_stack(&stack_a);
			handle_error();
		}
		stack_add_back(&stack_a, stack_new_node(num));
		i++;
	}
	return (stack_a);
}

// check for valid input and handle different cases
// return stack with numbers from input, first input = first node
t_stack	*handle_input(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc == 1)
		exit(1);
	if ((argc == 2 && argv[1][0] == '\0'))
		handle_error();
	if (argc == 2)
		stack_a = handle_str_input(argv[1]);
	else if (argc > 2)
		stack_a = handle_int_input(argc, argv);
	if (!stack_a || has_duplicate(stack_a))
	{
		free_stack(&stack_a);
		handle_error();
	}
	return (stack_a);
}
