/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:52:18 by hrobin            #+#    #+#             */
/*   Updated: 2023/03/23 18:41:37 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack a, t_stack b, int c)
{
	if (a.arr)
	{
		b.arr[*b.size] = 0;
		*b.size = *b.size + 1;
		ft_rrb(b.arr, *b.size, 1);
		b.arr[0] = a.arr[0];
		ft_ra(a.arr, *a.size, 1);
		*a.size = *a.size - 1;
		a.arr[*a.size] = 0;
		if (c == 0)
			write(1, "pb\n", 3);
	}
}

void	ft_pa(t_stack b, t_stack a, int c)
{
	if (b.arr)
	{
		a.arr[*a.size] = 0;
		*a.size = *a.size + 1;
		ft_rra(a.arr, *a.size, 1);
		a.arr[0] = b.arr[0];
		ft_rb(b.arr, *b.size, 1);
		*b.size = *b.size - 1;
		b.arr[*b.size] = 0;
		if (c == 0)
			write(1, "pa\n", 3);
	}
}
