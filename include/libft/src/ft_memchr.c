/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 11:28:11 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/06 17:46:00 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, t_i32 c, t_size n)
{
	t_size	i;

	i = 0;
	while (i < n)
	{
		if (((t_u8 *)s)[i] == (t_u8)c)
			return (&((void *)s)[i]);
		i++;
	}
	return (NULL);
}
