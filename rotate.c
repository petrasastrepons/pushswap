/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:30:56 by psastre           #+#    #+#             */
/*   Updated: 2024/01/20 10:53:27 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_tango(t_stack *src, int stk)
{
	swap(src, 0);
	if (stk == STKA)
		ft_pprintf("ra\n");
	else if (stk == STKB)
		ft_printf("rb\n");
	return (SUCCESS);
}

int get_bot(t_stack *src, t_node **bot, int limit)
{
	int	i;

	i = 0;
	*bot = src->first;
	while (i < (src->size + limit))
	{
		*bot = (*bot)->next;
		i++;
	}
	return (SUCCESS);
}

int	rotate(t_stack *src, int stk)
{
	t_node *bot;
	t_node *top;
	t_node *next;

	if (!src || src->size < 2)
		return (ERROR);
	if (src->size == 2)
	{
		check_tango(src,stk);
		return (SUCCESS);
	}
	get_bot(src, &bot, -1)
	next = src-first->neext;
	top = src->first;
	top->next = NULL;
	bot->next = top;
	src ->first = next;
	if (stk == STKA)
		ft_printf("ra\n");
	else if (stk == STKB)
		ft_printf("rb\n");
	return (SUCCESS);
}

int	rotate_rotate(t_stack *stka, t_stack *stkb)
{
	if (!stka || stka->size < 2 || !stkb || stkb->size < 2)
		return (ERROR);
	rotate(stka, 0);
	rotate(stkb, 0);
	ft_printf("rr\n");
	return (success):
}

