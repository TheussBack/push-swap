/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 23:39:09 by hrobin          #+#    #+#             */
/*   Updated: 2023/03/23 18:09:20 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index(t_stack a, int n)
{
	int	i;

	i = -1;
	while (++i < *a.size)
		if (a.arr[i] == n)
			return (i);
	return (i);
}

int	ft_nb_moves(int *tab)
{
	if (tab[0] * tab[1] > 0)
	{
		if (tab[0] < 0)
			return (ft_abs(ft_smallest(tab, 2)));
		else
			return (ft_biggest(tab, 2));
	}
	return (ft_abs(tab[0]) + ft_abs(tab[1]));
}

void	ft_best_move(t_stack a, t_stack b)
{
	int	temp[2];
	int	save[2];
	int	i;

	i = 0;
	save[0] = 10000;
	save[1] = 10000;
	while (i < *b.size)
	{
		temp[0] = ft_pos_a(a.arr, *a.size, b.arr[i]);
		if (i <= *b.size / 2)
			temp[1] = i;
		if (i > *b.size / 2)
			temp[1] = -(*b.size - i);
		if (ft_nb_moves(temp) < ft_nb_moves(save))
		{
			save[0] = temp[0];
			save[1] = temp[1];
		}
		i++;
	}
	ft_place_b(a, b, save);
}

void	ft_sort(t_stack a)
{
	t_stack	b;
	int		*lis;

	if (*a.size == 2)
		ft_sa(a.arr, 0);
	else if (*a.size == 3)
		ft_sort_three(a.arr, *a.size);
	else if (*a.size == 4 || *a.size == 5)
		ft_sort_f(a);
	else
	{
		lis = ft_lis(a.arr, *a.size);
		b = ft_push_lis(a, lis, ft_size_lis(a.arr, *a.size));
		while (*b.size > 0)
			ft_best_move(a, b);
		while (a.arr[0] != ft_smallest(a.arr, *a.size))
			ft_smart_rotate(a.arr, *a.size, ft_index(a, ft_smallest(a.arr,
						*a.size)));
		free(b.arr);
		free(b.size);
	}
}
