/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichyzh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:51:01 by ichyzh            #+#    #+#             */
/*   Updated: 2018/03/21 17:09:45 by ichyzh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include "libft.h"
# define BUFF_SIZE 19999

typedef	struct		s_glist
{
	int				fd;
	char			*str;
	struct s_glist	*next;
}					t_glist;

int					get_next_line(const int fd, char **line);

#endif
