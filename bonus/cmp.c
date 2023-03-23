/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 04:11:34 by maparigi          #+#    #+#             */
/*   Updated: 2022/04/29 21:24:22 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cmp_rrotate(t_stack a, t_stack b, char *move)
{
	if (ft_strcmp(move, "rra") == 0)
		ft_rra(a.arr, *a.size, 1);
	else if (ft_strcmp(move, "rrb") == 0)
		ft_rrb(b.arr, *b.size, 1);
	else if (ft_strcmp(move, "rrr") == 0)
		ft_rrr(a, b, 1);
	else
	{
		write(1, "Error\n", 6);
		return ;
	}
}

void	ft_cmp_rotate(t_stack a, t_stack b, char *move)
{
	if (ft_strcmp(move, "ra") == 0)
		ft_ra(a.arr, *a.size, 1);
	else if (ft_strcmp(move, "rb") == 0)
		ft_rb(b.arr, *b.size, 1);
	else if (ft_strcmp(move, "rr") == 0)
		ft_rr(a, b, 1);
	else
	{
		write(1, "Error\n", 6);
		return ;
	}
}

void	ft_cmp_push(t_stack a, t_stack b, char *move)
{
	if (ft_strcmp(move, "pa") == 0)
		ft_pa(b, a, 1);
	else if (ft_strcmp(move, "pb") == 0)
		ft_pb(a, b, 1);
	else
	{
		write(1, "Error\n", 6);
		return ;
	}
}

void	ft_cmp_swap(t_stack a, t_stack b, char *move)
{
	if (ft_strcmp(move, "sa") == 0)
		ft_sa(a.arr, 1);
	else if (ft_strcmp(move, "sb") == 0)
		ft_sb(b.arr, 1);
	else if (ft_strcmp(move, "ss") == 0)
		ft_ss(a, b, 1);
	else
	{
		write(1, "Error\n", 6);
		return ;
	}
}
