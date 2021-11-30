/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:56:37 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/06 18:20:27 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_i32	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	t_size	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((t_u8 *)s1)[i] == ((t_u8 *)s2)[i] && i < n - 1)
		i++;
	return (((t_u8 *)s1)[i] - ((t_u8 *)s2)[i]);
}
