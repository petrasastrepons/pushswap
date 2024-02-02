/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:29:11 by psastre           #+#    #+#             */
/*   Updated: 2024/02/02 19:47:23 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	print_node(t_stack *stk)
{
	t_node	*aux;

	if (!stk)
		return (ERROR);
	aux = stk->first;
	while (aux)
	{
		ft_printf("el nodo actual: %p el nodo siguiente es: %p\n",
			aux, aux->next);
		ft_printf("el contenido es: %i el indice es: %i\n",
			aux->cont, aux->index);
		aux = aux->next;
	}
	f_printf("The size of the stack is : %i\n", stk->size);
	return (SUCCESS);
}

int	free_change(t_stack *stk)
{
	t_node	*rm;

	if (!stk)
		return (SUCCESS);
	while (stk->first)
	{
		rm = stk->first;
		stk->first = stk->first->next;
		free(rm);
	}
	free(stk)
	return (SUCCESS);
}

void	change(t_stack *stka, t_stack *stkb)
{
	free_change(stka);
	free_change(stkb);
}
