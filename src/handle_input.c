#include "../include/push_swap.h"

static int	ft_atoi_2(const char *str)
{
	long long int	num;
	int				sign;

	num = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13)) // skip whitespace
		str++;
	if ((*str == '-' || *str == '+') // handle + and - signs
		&& (*(str + 1) >= 48 && *(str + 1) <= 57))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str) // convert string to int
	{
		if (!(*str >= 48 && *str <= 57)) // if not a digit
			handle_error();
		num = num * 10 + (*str - 48);
		str++;
	}
	if (num * sign > 2147483647 || num * sign < -2147483648) // check for overflow
		handle_error();
	return (num * sign);
}

static t_stack	*handle_str_input(char *str)
{
	int		i;
	int		num;
	char	**tmp;
	t_stack	*stack_a;

	i = 0;
	stack_a = NULL;
	tmp = ft_split(str, ' ');
	while (tmp[i])
	{
		num = ft_atoi_2(tmp[i]);
		stack_add_back(&stack_a, stack_new_node(num));
		i++;
	}
	i = 0;
	while (tmp[i])
		free(tmp[i++]);
	free(tmp);
	return (stack_a);
}

t_stack *handle_int_input(int argc, char *argv[])
{
    int i;
    int num;
    t_stack *stack_a;

    i = 1;
    stack_a = NULL;
    while (i < argc)
    {
        num = atoi_2(argv[i]);
        stack_add_back(&stack_a, stack_new_node(num));
        i++;
    }
    return (stack_a);
}

t_stack	*handle_input(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		handle_error();
	if (argc == 2)
		stack_a = handle_str_input(argv[1]);
	else if (argc > 2)
		stack_a = handle_int_input(argc, argv);
    if (!stack_a || check_dup(stack_a) == 1) // error checking
    {
        free_stack(stack_a);
        handle_error();
    }
	return (stack_a);
}