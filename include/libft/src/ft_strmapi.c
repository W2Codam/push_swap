/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 09:57:39 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/07 10:23:11 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(t_u32, char))
{
	t_size	i;
	char	*out;

	i = 0;
	out = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!out || !f)
		return (NULL);
	while (s[i] != '\0')
	{
		out[i] = f(i, s[i]);
		i++;
	}
	return (out);
}
