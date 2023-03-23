/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:53:05 by hrobin          #+#    #+#             */
/*   Updated: 2022/04/29 21:25:01 by hrobin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*n;

	i = 0;
	n = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!n)
		return (NULL);
	while (s[i])
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
