/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 15:10:52 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/14 19:34:23 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/** 
 * Assign the index values for radixing. 
 * This is a slow and primitive approach but I don't like push_swap :( 
 * The idea is simple for every element we compare it with every other element 
 * The complexity of this is questionable, yes, but it works! 
 * For each entry we document if it is smaller than what the smallest value is 
 * we found previously, once we reach the end we assign i as the radix index!.
 * Now do that for every element and you index them based on what "order" they 
 * should have.
 */
static void	index_stack(t_stack *s)
{
	t_i32	i;
	t_list	*cpy;
	t_val	*smallest;

	i = 0;
	while (i < s->size)
	{
		smallest = NULL;
		cpy = s->data;
		while (cpy)
		{
			if (((t_val *)cpy->content)->radix_index > -1)
			{
				cpy = cpy->next;
				continue ;
			}
			else if (!smallest || ((t_val *)cpy->content)->num < smallest->num)
				smallest = ((t_val *)cpy->content);
			cpy = cpy->next;
		}
		smallest->radix_index = i;
		i++;
	}
}

void	sort_3(t_stack *a)
{
	t_i32	an;
	t_i32	bn;
	t_i32	cn;

	an = get_at(a, 0)->num;
	bn = get_at(a, 1)->num;
	cn = get_at(a, 2)->num;
	if (an > bn && bn < cn && cn > an)
		sa(a);
	else if (an > bn && bn > cn && cn < an)
	{
		sa(a);
		rra(a);
	}
	else if (an > bn && bn < cn && cn < an)
		ra(a);
	else if (an < bn && bn > cn && cn > an)
	{
		sa(a);
		ra(a);
	}
	else if (an < bn && bn > cn && cn < an)
		rra(a);
}

void	sort_5(t_stack *a, t_stack *b)
{
	while (a->size != 3)
	{
		if (get_at(a, 0)->radix_index <= 1)
			pb(a, b);
		else
			rra(a);
	}
	sort_3(a);
	while (b->size > 0)
	{
		if (get_at(a, 0)->radix_index < get_at(b, 0)->radix_index)
		{
			pa(a, b);
			sa(a);
		}	
		else
			pa(a, b);
	}
}

/** 
 * Radix sort algorithm. 
 * The idea is the following! You sort by bits themselves! 
 * So all numbers with higher bits get pushed to the bottom else you 
 * store them in b to put them back ontop of A. 
 * Once all the small ones are in b you just push them back ontop of a. 
 * Rince an repeat for the next digit "level".
 * Fast ? yeah. Good? ehhh.
 * @see https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
 * @see https://www.geeksforgeeks.org/radix-sort/
 * @param a Stack A.
 * @param b Stack B.
 */
static void	big_sort(t_stack *a, t_stack *b)
{
	t_i32	i;
	t_i32	index;
	t_i32	size;

	i = 0;
	index = 0;
	size = a->size;
	while (!is_sorted(a))
	{
		i = -1;
		while (++i < size)
		{
			if ((((t_val *)a->data->content)->radix_index >> index) & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (b->size > 0)
			pa(a, b);
		index++;
	}
}

void	sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return ;
	if (a->size == 2)
	{
		if (get_at(a, 0)->num > get_at(a, 1)->num)
			sa(a);
	}
	else if (a->size == 3)
		sort_3(a);
	else if (a->size <= 5)
	{
		index_stack(a);
		sort_5(a, b);
	}
	else
	{
		index_stack(a);
		big_sort(a, b);
	}
}
