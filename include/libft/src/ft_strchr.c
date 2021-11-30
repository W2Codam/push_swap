/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:48:24 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/08 13:53:57 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, t_i32 c)
{
	t_size	i;
	t_size	len;

	i = 0;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[len]);
	while (i < len - 1)
	{
		if (s[i] == (t_u8)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
