/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 11:52:13 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/19 14:21:56 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	t_list		*head;
	t_list		*next;
	t_list		*nnext;

	if (stack->size > 1)
	{
		head = stack->data;
		next = head->next;
		nnext = next->next;
		stack->data = next;
		stack->data->next = head;
		stack->data->next->next = nnext;
	}
}

void	sa(t_stack *stackA)
{
	swap(stackA);
	ft_putendl("sa");
}

void	sb(t_stack *stackB)
{
	swap(stackB);
	ft_putendl("sb");
}

void	ss(t_stack *stackA, t_stack *stackB)
{
	swap(stackA);
	swap(stackB);
	ft_putendl("ss");
}
