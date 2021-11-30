/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 14:12:19 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/18 02:43:14 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_dup(t_stack *stack, t_i32 n)
{
	t_list	*iter;

	iter = stack->data;
	while (iter)
	{
		if (n == ((t_val *)iter->content)->num)
			return (true);
		iter = iter->next;
	}
	return (false);
}
