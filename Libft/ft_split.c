/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:10:09 by hrobin          #+#    #+#             */
/*   Updated: 2022/04/29 21:24:52 by hrobin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *str, char c)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		while (str[i] != c && str[i])
			i++;
		m++;
		while (str[i] == c && str[i])
			i++;
	}
	return (m);
}

static char	*ft_strdupbis(char const *src, char c, int i)
{
	char	*dest;
	int		size;
	int		n;
	int		p;

	n = i;
	p = 0;
	size = 0;
	while (src[n] && src[n] != c)
	{
		size++;
		n++;
	}
	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	while (p < size && src[i] && src[i] != c)
	{
		dest[p] = src[i];
		i++;
		p++;
	}
	dest[p] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		p;
	int		n;

	n = ft_count_word(s, c);
	tab = malloc(sizeof(char *) * (n + 1));
	i = 0;
	p = 0;
	if (!tab)
		return (NULL);
	while (s[i] && p < n)
	{
		while (s[i] == c && s[i])
			i++;
		tab[p] = ft_strdupbis(s, c, i);
		while (s[i] != c && s[i])
			i++;
		p++;
	}
	tab[p] = 0;
	return (tab);
}
