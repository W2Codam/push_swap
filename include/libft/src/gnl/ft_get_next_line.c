/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_next_line.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 15:27:53 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/31 12:34:43 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_gets(char *readstr, t_fd_data *remainder)
{
	t_size	len;
	char	*out;
	char	*rem;

	len = ft_strclen(readstr, '\n') + 1;
	if (!readstr[len - 1])
		len--;
	out = ft_substr(readstr, 0, len);
	rem = ft_strdup(readstr + len);
	free(readstr);
	if (!*rem)
	{
		free(rem);
		remainder->data = NULL;
	}
	else
		remainder->data = rem;
	return (out);
}

char	*ft_attach(char *readstr, t_fd_data *remainder)
{
	char	*temp;

	if (remainder->data)
	{
		temp = ft_str_append(remainder->data, readstr);
		remainder->data = NULL;
		free(readstr);
		return (ft_gets(temp, remainder));
	}
	return (ft_gets(readstr, remainder));
}

static char	*ft_try_read(t_i32 fd, t_fd_data *remainder)
{
	t_size	b_read;
	char	*readstr;
	char	BUFF[BUFF_SIZE + 1];

	b_read = 1;
	readstr = NULL;
	while (b_read > 0)
	{
		b_read = read(fd, BUFF, BUFF_SIZE);
		remainder->read = b_read < BUFF_SIZE;
		if (!b_read)
			break ;
		BUFF[b_read] = '\0';
		readstr = ft_str_append(readstr, BUFF);
		if (ft_strchr(readstr, '\n'))
			return (ft_attach(readstr, remainder));
	}
	if (remainder->data)
		return (ft_attach(readstr, remainder));
	if (readstr)
		return (readstr);
	return (NULL);
}

char	*ft_get_next_line(t_i32 fd)
{
	static t_fd_data	FD[FD_MAX];

	if (read(fd, NULL, 0) == -1)
		return (NULL);
	if (fd >= 0 && fd <= FD_MAX && BUFF_SIZE > 0)
	{
		if (FD[fd].data && (ft_strchr(FD[fd].data, '\n') || FD[fd].read))
			return (ft_gets(FD[fd].data, &FD[fd]));
		return (ft_try_read(fd, &FD[fd]));
	}
	return (NULL);
}
