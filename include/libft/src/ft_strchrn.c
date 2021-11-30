/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchrn.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:48:24 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:17:40 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_i32	ft_strchrn(const char *s, char c)
{
	t_i32	cn;
	t_size	i;

	i = -1;
	cn = 0;
	while (s[++i] != '\0')
		if (s[i] == c)
			cn++;
	return (cn);
}
