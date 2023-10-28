/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:26:56 by psastre           #+#    #+#             */
/*   Updated: 2023/10/28 10:57:30 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_tango(t_stack *src, int stk)
{
	swap(src, 0);
	if (stk == STKA)
		ft_printf("rra\n");
	else if (stk == STKB)
		ft_printf("rrb\n");
	return (SUCCESS);
}

int	r_rotate(T_stack *src, int stk)
{
	t_node	*top;
	t_node	*bot;
	t_node	*next;

	if (!src || src->size < 2)
		return (ERROR);
	if (src->size == 2)
	{
		check_tango(src, stk);
		return (SUCCESS);
	}
	get_bot(src, &bot, -1);
	top = src->first;
	bot->next = top;
	get_bot(src, &next, -2);
	next->next = NULL;
	src->first = bot;
	if (stk == STKA)
		ft_printf("rra\n");
	else (stk == STKB)
		ft_printf("rrb\n");
	return (SUCCESS);
}

int	r_rot_rot(t_stack *stka, t_stack *stkb)
{
	if (!stka || stka->size < 2 || !stkb || stkb->size < 2)
		return (ERROR);
	r_rotate(stka, 0);
	r_rotate(stkb, 0);
	ft_printf("rrr\n");
	return (SUCCESS);
}
