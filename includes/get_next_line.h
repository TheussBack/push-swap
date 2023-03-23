/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:18:32 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/29 21:24:32 by maparigi         ###   ########.fr       */
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