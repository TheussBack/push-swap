/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_smalls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:45:51 by hrobin          #+#    #+#             */
/*   Updated: 2023/03/23 17:48:35 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_three(int *a, int size)
{
	if (ft_check_sorted(a, size) == TRUE)
		return (1);
	else if (a[0] > a[1] && a[0] < a[2])
		ft_sa(a, 0);
	else if (a[0] > a[1] && a[1] > a[2])
	{
		ft_sa(a, 0);
		ft_rra(a, size, 0);
	}
	else if (a[0] > a[1] && a[0] > a[2])
		ft_ra(a, size, 0);
	else if (a[0] < a[1] && a[0] < a[2])
	{
		ft_sa(a, 0);
		ft_ra(a, size, 0);
	}
	else if (a[0] < a[1] && a[0] > a[2])
		ft_rra(a, size, 0);
	return (0);
}

void	ft_sort_f(t_stack a)
{
	t_stack	b;
	int		s;

	b.arr = ft_calloc(*a.size);
	b.size = ft_calloc(1);
	*b.size = 0;
	while (*a.size != 3)
	{
		s = ft_smallest(a.arr, *a.size);
		ft_ruf(a, ft_index(a, s), s);
		ft_pb(a, b, 0);
	}
	ft_sort_three(a.arr, *a.size);
	while (*b.size != 0)
		ft_pa(b, a, 0);
	free(b.arr);
	free(b.size);
}
