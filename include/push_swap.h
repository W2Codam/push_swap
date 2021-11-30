/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:25:29 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/23 16:26:18 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

//= Types =//

typedef struct s_stack
{
	t_list	*data;
	t_i32	size;
}	t_stack;

typedef struct s_val
{
	t_i32	num;
	t_i32	radix_index;
}	t_val;

//= Functions =//

/** 
 * Exits and kills the program incase of failure, free's a and b.
 * @param a Stack A.
 * @param b Stack B.
 */
void	exit_error(t_stack *a, t_stack *b);

t_val	*insert_arg(char *n);

void	free_stack(t_stack *stack);

t_val	*get_at(t_stack *stack, t_i32 index);

t_bool	is_sorted(t_stack *stack);

void	debug_stack(t_stack *s);

t_bool	is_dup(t_stack *stack, t_i32 n);

void	sort(t_stack *a, t_stack *b);

//void	free_stack(t_stack *stack);

//= Operations =//

/** 
 * Swap the first 2 elements at the top of stack a. 
 * @param stackA Stack A.
 */
void	sa(t_stack *a);

/** 
 * Swap the first 2 elements at the top of stack b. 
 * @param stackA Stack B.
 */
void	sb(t_stack *b);

/** 
 * sa and sb at the same time.
 * @param stackA Stack A.
 * @param stackB Stack B.
 */
void	ss(t_stack *a, t_stack *b);

/** 
 * Takes the first element at the top of b and put it at the top of a. 
 * Do nothing if b is empty.
 * @param stackA Stack A.
 * @param stackB Stack B.
 */
void	pa(t_stack *a, t_stack *b);

/** 
 * Takes the first element at the top of a and put it at the top of b. 
 * Do nothing if b is empty.
 * @param stackA Stack A.
 * @param stackB Stack B.
 */
void	pb(t_stack *a, t_stack *b);

/** 
 * Shift up all elements of stack a by 1. 
 * The first element becomes the last one.
 * @param a Stack A.
 */
void	ra(t_stack *a);

/** 
 * Shift up all elements of stack b by 1. 
 * The first element becomes the last one.
 * @param b Stack B.
 */
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rra(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
