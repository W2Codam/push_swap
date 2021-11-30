/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 10:33:39 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/06 17:03:11 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *s, t_i32 fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
