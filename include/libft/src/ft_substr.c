/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 09:15:14 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/26 18:26:19 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, t_u32 start, t_size len)
{
	char	*sub;
	t_size	strln;

	strln = ft_strlen(s);
	if (start > strln)
		return (ft_strdup(""));
	if (len > strln - start)
		return (ft_strdup(s + start));
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
