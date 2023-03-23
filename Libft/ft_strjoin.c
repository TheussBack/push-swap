/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:55:18 by hrobin          #+#    #+#             */
/*   Updated: 2023/03/23 21:25:04 by hrobin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	n;

	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s3)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i])
	{
		s3[n] = s1[i];
		n++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s3[n] = s2[i];
		n++;
		i++;
	}
	s3[n] = '\0';
	return (s3);
}
