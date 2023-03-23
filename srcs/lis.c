/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:52:04 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/29 21:25:31 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_tmp(int *a, int size)
{
	int	i;
	int	*tmp;

	tmp = ft_calloc(size);
	i = -1;
	while (++i < size)
		tmp[i] = a[i];
	while (tmp[0] != ft_smallest(tmp, size))
		ft_ra(tmp, size, 1);
	return (tmp);
}

int	*ft_fill_k(int *tmp, int size)
{
	int	*k;
	int	i;
	int	j;

	k = ft_calloc(size);
	i = -1;
	while (++i < size)
		k[i] = 1;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < i)
			if (tmp[i] > tmp[j])
				if (k[j] + 1 > k[i])
					k[i] = k[j] + 1;
	}
	return (k);
}

int	ft_size_lis(int *a, int size)
{
	int	*k;
	int	*tmp;
	int	n;

	tmp = ft_tmp(a, size);
	k = ft_fill_k(tmp, size);
	n = ft_biggest(k, size);
	free(k);
	free(tmp);
	return (n);
}

int	*ft_lis(int *a, int size)
{
	int	*lis;
	int	*tmp;
	int	*k;
	int	j;

	tmp = ft_tmp(a, size);
	k = ft_fill_k(tmp, size);
	j = ft_biggest(k, size);
	lis = ft_calloc(j);
	while (size-- > 0)
	{
		if (k[size] == j)
		{
			lis[j - 1] = tmp[size];
			j--;
		}
	}
	free(tmp);
	free(k);
	return (lis);
}

int	ft_is_lis(int *lis, int sizelis, int n)
{
	int	i;

	i = 0;
	while (i < sizelis)
	{
		if (lis[i] == n)
			return (TRUE);
		i++;
	}
	return (FALSE);
}
