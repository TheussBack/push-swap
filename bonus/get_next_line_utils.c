/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:02:34 by hrobin          #+#    #+#             */
/*   Updated: 2023/03/23 21:24:24 by hrobin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strchrr(const char *str, char c)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == c)
				return (i);
			i++;
		}
	}
	return (-1);
}

char	*ft_strjoinn(char *s1, char *s2)
{
	char	*s3;
	int		i;
	int		n;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i++])
		s3[n++] = s1[i - 1];
	i = 0;
	while (s2[i++])
		s3[n++] = s2[i - 1];
	s3[n] = '\0';
	free(s1);
	return (s3);
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		size;
	int		i;

	if (!src)
		return (NULL);
	size = ft_strlen(src);
	if (n > size)
		return (NULL);
	dest = malloc(sizeof(char) * (size - n) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	free(src);
	return (dest);
}
