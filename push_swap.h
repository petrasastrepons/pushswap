/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:25:16 by psastre           #+#    #+#             */
/*   Updated: 2024/02/02 19:44:39 by psastre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

# define TRUE 1
# define ERROR -1
# define SUCCESS	0
# define FALSE		1
# define STKA		1
# define STKB		2

typedef struct s_node
{
	int				cont;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*first;
	t_node	*last;
}	t_stack;

int		parse(int argc, char **argv);
int		double_init(t_stack **stk1, t_stack **stk2);
int		free_change(t_stack *stk);
void	change(t_stack *stka, t_stack *stkb);
int		print_node(t_stack *stk);
int		push(t_stack **src, t_stack **dst, int stk);
int		push_stack(t_stack **stk, int cont, int index);
int		swap(t_stack *src, int stk);
int		swap_swap(t_stack *stka, t_stack *stkb);
int		get_bot(t_stack *src, t_node **bot, int limit);
int		rotate(t_stack *src, int stk);
int		rotate_rotate(t_stack *stka, t_stack *stkb);
int		r_rotate(t_stack *src, int stk);
int		r_rot_rot(t_stack *stka, t_stack *stkb);
int		is_sorted(t_stack *stack);
void	sort_digits(t_stack *stka, t_stack *stkb, int i);
void	sort_big(t_stack *stka, t_stack *stkb);
void	indexer(t_stack *stk);
int		find_pos(t_stack *src, int trgt);
int		s_sort(t_stack *stka, t_stack *stkb);

#endif
