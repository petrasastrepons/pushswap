#include "../push_swap.h"

static int	init_stack(t_stack **stack)
{
	*stack = ft_calloc(sizeof(t_stack), 1);
	if (!*stack)
		return (ERROR);
	(*stack)->size = 0;
	(*stack)->first = NULL;
	(*stack)->last = NULL;
	return (SUCCESS);
}

int	double_init(t_stack **stk!, t_stack **stk2)
{
	if (init_stack(stk1) == ERROR || init_stack(skt2) == ERROR)
	{
		write(2, "Error\n", 6);
		exit(ERROR);
	}
	return (SUCCESS);
} 
