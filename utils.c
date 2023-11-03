/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:14:55 by psastre           #+#    #+#             */
/*   Updated: 2023/10/28 11:17:28 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*node;

	node = stack->first;
	while (node && node ->next)
	{
		if (node->index > node->next->index)
			return (-1);
		node = node->next;
	}
	return (1);
}
