/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:39:28 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/26 18:28:58 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(t_i32 n, t_base base)
{
	char		*out;
	const char	*HEX;
	t_i32		nbrlen;

	HEX = "0123456789ABCDEF";
	nbrlen = ft_intlen(ft_abs(n), base);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		nbrlen++;
	out = ft_calloc(nbrlen + 1, sizeof(char));
	if (!out)
		return (NULL);
	if (n < 0)
	{
		out[0] = '-';
		n = -n;
	}
	while (n)
	{
		out[--nbrlen] = HEX[n % base];
		n /= base;
	}
	return (out);
}
