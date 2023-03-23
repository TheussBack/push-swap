/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:40:19 by hrobin          #+#    #+#             */
/*   Updated: 2022/04/29 21:26:08 by hrobin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(int *la, int c)
{
	int	swap;

	swap = la[0];
	la[0] = la[1];
	la[1] = swap;
	if (c == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(int *lb, int c)
{
	int	swap;

	swap = lb[0];
	lb[0] = lb[1];
	lb[1] = swap;
	if (c == 0)
		write(1, "sb\n", 3);
}

void	ft_ss(t_stack a, t_stack b, int c)
{
	ft_sa(a.arr, 1);
	ft_sb(b.arr, 1);
	if (c == 0)
		write(1, "ss\n", 3);
}
