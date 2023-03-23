/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:27:20 by hrobin          #+#    #+#             */
/*   Updated: 2023/03/23 21:24:38 by hrobin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <libft.h>

typedef struct s_stack
{
	int	*arr;
	int	*size;
}	t_stack;

/*-----Parse-----*/
int			*ft_parse_two(char **tab, int ac);
int			*ft_parse_one(char *tab);

int			*ft_parse(int ac, char **av);
int			ft_size(int ac, char **av);

/*-----Checks-----*/
int			ft_check_double(int *tab, int size);
int			ft_check_sorted(int *i, int size);
int			ft_check(t_stack tosort);
int			is_digit(char *stack);

/*-----Other-----*/
int			ft_smallest(int *tab, int size);
int			ft_biggest(int *tab, int size);
int			ft_index(t_stack a, int n);
int			ft_strrlen(char **str);
int			*ft_calloc(int size);

void		ft_free(char **str);

/*-----Moves-----*/

/*---Swap---*/
void		ft_ss(t_stack a, t_stack b, int c);
void		ft_sa(int *la, int c);
void		ft_sb(int *lb, int c);
/*---Push---*/
void		ft_pb(t_stack a, t_stack b, int c);
void		ft_pa(t_stack b, t_stack a, int c);

/*---Rotate---*/
void		ft_rr(t_stack a, t_stack b, int c);
void		ft_ra(int *la, int size, int c);
void		ft_rb(int *lb, int size, int c);

/*---Reverse_Rotate---*/
void		ft_rrr(t_stack a, t_stack b, int c);
void		ft_rra(int *la, int size, int c);
void		ft_rrb(int *lb, int sizeb, int c);

/*-----Sort-----*/

/*---B---*/
t_stack		ft_push_lis(t_stack tosort, int *lis, int sizelis);
int			ft_check_lis(t_stack a, int *lis, int sizelis);
int			ft_is_lis(int *lis, int sizelis, int n);

/*---Lis---*/
int			ft_size_lis(int *tosort, int size);
int			*ft_fill_k(int *tosort, int size);
int			*ft_lis(int *tosort, int size);
int			*ft_tmp(int *a, int size);

/*---ValMoves---*/
int			ft_pos_big(int *tosort, int size, int n);
int			ft_pos_a(int *tosort, int size, int n);

void		ft_place_b(t_stack a, t_stack b, int *save);
void		ft_best_move(t_stack a, t_stack b);

/*---Sorting---*/
void		ft_smart_rotate(int *tosort, int size, int i);
void		ft_ruf(t_stack a, int i, int n);
void		ft_sort(t_stack tosort);

int			ft_sort_three(int *tosort, int size);
void		ft_sort_f(t_stack a);

/*-----Bonus-----*/
void		ft_cmp_rrotate(t_stack a, t_stack b, char *move);
void		ft_cmp_rotate(t_stack a, t_stack b, char *move);
void		ft_cmp_push(t_stack a, t_stack b, char *move);
void		ft_cmp_swap(t_stack a, t_stack b, char *move);

#endif
