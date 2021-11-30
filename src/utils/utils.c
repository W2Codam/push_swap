/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 13:07:55 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/23 16:21:23 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static t_bool	parse_line(const char *str)
{
	t_i32	minus_count;
	t_size	i;

	i = -1;
	minus_count = 0;
	while (str[++i])
	{
		if (str[i] == '-')
		{
			if (ft_isdigit(str[i - 1]))
				return (false);
			minus_count++;
			if (minus_count > 1 || !ft_isdigit(str[i + 1]))
				return (false);
			continue ;
		}
		else if (ft_isdigit(str[i]))
			continue ;
		else
			return (false);
	}
	return (true);
}

t_bool	is_sorted(t_stack *stack)
{
	t_list	*c;

	c = stack->data;
	while (c->next)
	{
		if (((t_val *)c->next->content)->num < ((t_val *)c->content)->num)
			return (false);
		c = c->next;
	}
	return (true);
}

t_val	*get_at(t_stack *stack, t_i32 index)
{
	t_i32	i;
	t_list	*c;

	i = 0;
	c = stack->data;
	if (stack->size == 0)
		return (NULL);
	else if (index >= stack->size)
		return ((t_val *)ft_lstlast(stack->data)->content);
	while (i < index && c)
	{
		c = c->next;
		i++;
	}
	return ((t_val *)c->content);
}

t_val	*insert_arg(char *n)
{
	long	nbr;
	t_val	*out;

	if (!*n || !parse_line(n))
		return (NULL);
	out = malloc(sizeof(t_val));
	if (!out)
		return (NULL);
	nbr = ft_atoi(n);
	if (nbr >= INT32_MIN && nbr <= INT32_MAX)
	{
		out->num = nbr;
		out->radix_index = -1;
		return (out);
	}
	return (NULL);
}
