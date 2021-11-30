/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 18:03:14 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/07 10:23:25 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, size_t n)
{
	t_size	i;
	t_size	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	if (!n || dstlen >= n)
		return (ft_strlen(src) + n);
	while (src[i] && i < n - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (ft_strlen(src) + dstlen);
}
