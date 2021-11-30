/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:25:29 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/30 12:42:23 by lde-la-h      ########   odam.nl         */
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

/**
 * Inserts converts a given string to a t_val, checking that the value is valid.
 * 
 * @param n The string "number" value.
 * @return The value.
 */
t_val	*insert_arg(char *n);

/**
 * Simple indexing for linked list based stack.
 * 
 * @param stack The stack.
 * @param index Which item to get at the specified index.
 * @return The value at that index from the stack.
 */
t_val	*get_at(t_stack *stack, t_i32 index);

/**
 * Checks wether the stack is sorted in ascending order.
 * 
 * @param stack The stack.
 * @return Is it sorted in ascending order.
 */
t_bool	is_sorted(t_stack *stack);

/**
 * Checks if the given int, n, already exists in the stack.
 * 
 * @param stack The stack.
 * @param n The number to check.
 * @return Its a duplicate.
 */
t_bool	is_dup(t_stack *stack, t_i32 n);

/**
 * Free's all elements in the stack, and free's the stack itself.
 * 
 * @param stack The stack.
 */
void	free_stack(t_stack *stack);

/**
 * Sort a given stack.
 * 
 * @param a Primary stack.
 * @param b Secondary stack.
 */
void	sort(t_stack *a, t_stack *b);
//void	debug_stack(t_stack *s);

//= Operations =//

/** 
 * Swap the first 2 elements at the top of stack a. 
 * @param a Stack A.
 */
void	sa(t_stack *a);

/** 
 * Swap the first 2 elements at the top of stack b. 
 * @param b Stack B.
 */
void	sb(t_stack *b);

/** 
 * sa and sb at the same time.
 * @param a Stack A.
 * @param b Stack B.
 */
void	ss(t_stack *a, t_stack *b);

/** 
 * Takes the first element at the top of b and put it at the top of a. 
 * Do nothing if b is empty.
 * @param a Stack A.
 * @param b Stack B.
 */
void	pa(t_stack *a, t_stack *b);

/** 
 * Takes the first element at the top of a and put it at the top of b. 
 * Do nothing if b is empty.
 * @param a Stack A.
 * @param b Stack B.
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

/**
 * Do ra and rb at the same time
 * 
 * @param a Stack A.
 * @param b Stack B.
 */
void	rr(t_stack *a, t_stack *b);

/**
 * Push the last element to the top on stack a
 * 
 * @param a Stack a.
 */
void	rra(t_stack *a);

/**
 * Push the last element to the top on stack b
 * 
 * @param b Stack b.
 */
void	rrb(t_stack *b);

/**
 * Do rrb and rra at the same time.
 * 
 * @param a Stack a.
 * @param b stack b.
 */
void	rrr(t_stack *a, t_stack *b);

#endif
