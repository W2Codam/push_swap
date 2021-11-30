/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 09:33:52 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/07 16:32:21 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size	ft_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchrn(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static t_size	ft_end(char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > 0)
	{
		if (ft_strchrn(set, s1[len - 1]) == 0)
			break ;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_size	start;
	t_size	end;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (!set)
		return (ft_strdup(s1));
	if (start >= end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start));
}
