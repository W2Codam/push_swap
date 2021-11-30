/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 11:23:09 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/23 16:11:08 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*new_stack(void)
{
	t_stack	*out;

	out = malloc(sizeof(t_stack));
	if (out)
	{
		out->data = NULL;
		out->size = 0;
	}
	else
	{
		free(out);
		exit_error(NULL, NULL);
	}
	return (out);
}

static void	allocate_stacks(t_stack *a, t_stack *b, t_i32 argc, char **argv)
{
	t_i32	i;
	t_val	*val;

	i = 1;
	(void)b;
	while (i < argc)
	{
		val = insert_arg(argv[i++]);
		if (!val)
			exit_error(a, b);
		if (is_dup(a, val->num))
		{
			free(val);
			exit_error(a, NULL);
		}
		ft_lstadd_back(&a->data, ft_lstnew(val));
	}
	a->size = i - 1;
}

void	free_stack(t_stack *stack)
{
	ft_lstclear(&stack->data, &free);
	free(stack);
}

/*
void	debug_stack(t_stack *s)
{
	t_list	*copy;

	copy = s->data;
	ft_putendl("\x1b[32m============DEBUG============\033[0m");
	while (copy)
	{
		printf("%d ",((t_val *)copy->content)->num);
		copy = copy->next;
	}
	printf("\nSIZE: %i\n", s->size);
	ft_putendl("\x1b[32m============DONE=============\033[0m");
}
//system("clear");
allocate_stacks(a, b, argc, argv);
//debug_stack(a);
//ft_putendl("\n\x1b[31m[Instructions]\033[0m\n");
sort(a, b);
//ft_putchar('\n');
//debug_stack(a);

*/

/** 
 * Entry point of the program.
 * @param argc Argument count.
 * @param argv Argument values.
 * @returns Exit code, 1 = fail 0 = good.
 */
int	main(t_i32 argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	if (argc < 2)
		return (EXIT_SUCCESS);
	a = new_stack();
	b = new_stack();
	if (a && b)
	{
		allocate_stacks(a, b, argc, argv);
		sort(a, b);
	}
	free_stack(a);
	free_stack(b);
	exit(EXIT_SUCCESS);
}
