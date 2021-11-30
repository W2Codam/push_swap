/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 10:48:14 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/06 21:34:17 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, t_i32 c, t_size len)
{
	t_size	i;

	i = 0;
	while (i < len)
	{
		((t_u8 *)b)[i] = (t_u8)c;
		i++;
	}
	return (b);
}
