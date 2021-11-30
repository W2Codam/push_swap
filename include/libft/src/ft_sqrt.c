/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 10:46:35 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 10:47:28 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_i32	ft_sqrt(t_i32 num)
{
	t_i32	sqrt;

	sqrt = 0;
	while ((sqrt * sqrt) <= num && sqrt <= 46340)
	{
		if ((sqrt * sqrt) == num)
			break ;
		sqrt++;
	}
	return (sqrt);
}
