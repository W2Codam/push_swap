/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 12:16:20 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/23 16:22:02 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack *to, t_stack *from)
{
	t_list	*temp;

	temp = from->data->next;
	ft_lstadd_front(&to->data, from->data);
	from->data = temp;
}

void	pa(t_stack *a, t_stack *b)
{
	push(a, b);
	b->size--;
	a->size++;
	ft_putendl("pa");
}

void	pb(t_stack *a, t_stack *b)
{
	push(b, a);
	a->size--;
	b->size++;
	ft_putendl("pb");
}
