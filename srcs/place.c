/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:00:25 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/29 21:25:47 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_place_same_n(t_stack a, t_stack b, int *save)
{
	int	i;
	int	j;

	i = save[0];
	j = save[1];
	while (i < 0 && j < 0)
	{
		ft_rrr(a, b, 0);
		i++;
		j++;
	}
	while (i < 0)
	{
		ft_rra(a.arr, *a.size, 0);
		i++;
	}
	while (j < 0)
	{
		ft_rrb(b.arr, *b.size, 0);
		j++;
	}
}

void	ft_place_same_p(t_stack a, t_stack b, int *save)
{
	int	i;
	int	j;

	i = save[0];
	j = save[1];
	while (i > 0 && j > 0)
	{
		ft_rr(a, b, 0);
		i--;
		j--;
	}
	while (i > 0)
	{
		ft_ra(a.arr, *a.size, 0);
		i--;
	}
	while (j > 0)
	{
		ft_rb(b.arr, *b.size, 0);
		j--;
	}
}

void	ft_place_diff_ab(t_stack a, t_stack b, int *save)
{
	int	i;
	int	j;

	i = save[0];
	j = save[1];
	while (i > 0)
	{
		ft_ra(a.arr, *a.size, 0);
		i--;
	}
	while (j < 0)
	{
		ft_rrb(b.arr, *b.size, 0);
		j++;
	}
}

void	ft_place_diff_ba(t_stack a, t_stack b, int *save)
{
	int	i;
	int	j;

	i = save[0];
	j = save[1];
	while (i < 0)
	{
		ft_rra(a.arr, *a.size, 0);
		i++;
	}
	while (j > 0)
	{
		ft_rb(b.arr, *b.size, 0);
		j--;
	}
}

void	ft_place_b(t_stack a, t_stack b, int *save)
{
	if (save[0] < 0 && save[1] < 0)
		ft_place_same_n(a, b, save);
	else if (save[0] >= 0 && save[1] >= 0)
		ft_place_same_p(a, b, save);
	else if (save[0] >= 0 && save[1] < 0)
		ft_place_diff_ab(a, b, save);
	else if (save[0] < 0 && save[1] >= 0)
		ft_place_diff_ba(a, b, save);
	ft_pa(b, a, 0);
}
