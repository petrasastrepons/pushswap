/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:14:55 by psastre           #+#    #+#             */
/*   Updated: 2024/02/02 19:27:12 by psastre          ###   ########.fr       */
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
	return (TRUE);
}

void	sort_digits(t_stack *stka, t_stack *stkb, int bit)
{
	int	num;
	int	i;
	int	size;

	i = 0;
	size = stka->size;
	while (i < size)
	{
		num = stka->first->index;
		if ((num >> bit) & 1)
			rotate(stka, STKA);
		else
			push(&stka, &stkb, STKB);
		i++;
	}
}

void	sort_big(t_stacl *stka, t_stack *stkb)
{
	int	size;
	int	i;
	int	max_num;
	int	max_bits = 0;

	while (max_num)
	{
		max_num = max_num >> 1;
		max_bits++;
	}
	i = 0;
	while (i < max_bits)
	{
		sort_digits(stka, stkb, i);
		while (stkb->size)
			push (&stkb, &stka, STKA);
		i++;
	}
}