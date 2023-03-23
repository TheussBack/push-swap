/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:18:32 by hrobin          #+#    #+#             */
/*   Updated: 2023/03/23 21:24:32 by hrobin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

int			ft_strchrr(const char *str, char c);
int			ft_strlen_n(char *s);

char		*ft_strjoinn(char *s1, char *s2);
char		*ft_strndup(char *src, int n);
char		*get_next_line(int fd);

#endif
