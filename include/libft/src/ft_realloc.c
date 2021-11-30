/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 10:51:43 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/08 13:04:38 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, t_size old, t_size new)
{
	void	*newptr;

	if (!ptr)
		return (malloc(new));
	if (new < old)
		return (ptr);
	else
	{
		newptr = ft_memmove(malloc(new), ptr, old);
		free(ptr);
	}
	return (newptr);
}
