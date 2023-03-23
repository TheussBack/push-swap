/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:04:02 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/29 21:26:02 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_smart_rotate(int	*a, int size, int i)
{
	if (i <= size / 2)
		ft_ra(a, size, 0);
	else
		ft_rra(a, size, 0);
}

void	ft_ruf(t_stack a, int i, int n)
{
	while (a.arr[0] != n)
		ft_smart_rotate(a.arr, *a.size, i);
}

t_stack	ft_push_lis(t_stack a, int *lis, int sizelis)
{
	t_stack	b;
	int		i;
	int		j;
	int		sizecpy;

	b.size = ft_calloc(1);
	b.size[0] = 0;
	b.arr = ft_calloc(*a.size);
	sizecpy = *a.size;
	j = 0;
	i = -1;
	while (++i < *a.size && j < sizecpy - sizelis + 1)
	{		
		if (ft_is_lis(lis, sizelis, a.arr[i]) == FALSE)
		{
			ft_ruf(a, i, a.arr[i]);
			ft_pb(a, b, 0);
			j++;
			i = -1;
		}
	}
	free(lis);
	return (b);
}

int	ft_pos_big(int *a, int size, int n)
{
	int	i;

	i = 0;
	if (n > ft_biggest(a, size))
	{
		while (a[i] != ft_biggest(a, size))
			i++;
	}
	if (i > size / 2)
		return (-(size - i - 1));
	return (i + 1);
}

int	ft_pos_a(int *a, int size, int n)
{
	int	i;

	i = 0;
	if (n > a[size - 1] && n < a[0])
		return (0);
	if (n > ft_biggest(a, size))
		return (ft_pos_big(a, size, n));
	while (i < size)
	{
		if (n > a[i] && n < a[i + 1] && i <= size / 2)
			return (i + 1);
		else if (n > a[i] && n < a[i + 1] && i > size / 2)
			return (-(size - i - 1));
		i++;
	}
	return (0);
}
