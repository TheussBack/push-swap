/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:24:07 by hrobin            #+#    #+#             */
/*   Updated: 2023/03/23 18:44:30 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_strrlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_calloc(int size)
{
	int	*ret;
	int	i;

	ret = malloc(sizeof(int) * size);
	i = 0;
	while (i < size - 1)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}

int	ft_smallest(int *tab, int size)
{
	int	n;
	int	i;

	i = 0;
	n = tab[0];
	while (i < size)
	{
		if (tab[i] < n)
			n = tab[i];
		i++;
	}
	return (n);
}

int	ft_biggest(int *tab, int size)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < size)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
