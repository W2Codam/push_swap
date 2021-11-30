/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 09:09:58 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 09:12:41 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	temp;
	t_size	i;
	t_size	size;

	i = -1;
	size = ft_strlen(str);
	while (++i < --size)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
	}
	return (str);
}
