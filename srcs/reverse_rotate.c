/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hrobin <hrobin@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2022/04/29 21:27:07 by hrobin          #+#    #+#             */
/*   Updated: 2022/04/29 21:27:07 by hrobin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(int *la, int size, int c)
{
	int	swap;
	int	temp;

	temp = size;
	while (temp-- > 1)
	{
		swap = la[temp];
		la[temp] = la[temp - 1];
		la[temp - 1] = swap;
	}
	if (c == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(int *lb, int size, int c)
{
	int	swap;
	int	temp;

	temp = size;
	while (temp-- > 1)
	{
		swap = lb[temp];
		lb[temp] = lb[temp - 1];
		lb[temp - 1] = swap;
	}
	if (c == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack a, t_stack b, int c)
{
	ft_rra(a.arr, *a.size, 1);
	ft_rrb(b.arr, *b.size, 1);
	if (c == 0)
		write(1, "rrr\n", 4);
}
