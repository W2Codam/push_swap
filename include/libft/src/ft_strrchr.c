/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:48:24 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/08 13:55:01 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, t_i32 c)
{
	t_i32	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (t_u8)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
