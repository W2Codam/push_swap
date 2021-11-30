/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 10:41:24 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/18 02:07:46 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_last(t_stack *stack, t_list **slast, t_list **last)
{
	t_list	*iter;

	iter = stack->data;
	while (iter)
	{
		if (!iter->next->next)
		{
			(*slast) = iter;
			(*last) = iter->next;
			break ;
		}
		iter = iter->next;
	}
}

/** 
 * Shift down all elements of stack a by 1. 
 * The last element becomes the first one.
 * @param stack The Stack.
 */
static void	reverse(t_stack *stack)
{
	t_list	*slast;
	t_list	*last;

	slast = NULL;
	last = NULL;
	get_last(stack, &slast, &last);
	slast->next = NULL;
	ft_lstadd_front(&stack->data, last);
}

void	rra(t_stack *a)
{
	reverse(a);
	ft_putendl("rra");
}

void	rrb(t_stack *b)
{
	reverse(b);
	ft_putendl("rrb");
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse(a);
	reverse(b);
	ft_putendl("rrr");
}
