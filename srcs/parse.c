/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                     	    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:21:16 by maparigi          #+#    #+#             */
/*   Updated: 2022/03/14 18:14:48 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_parse_one(char *tab)
{
	char	**split;
	int		*tosort;
	int		j;

	split = ft_split(tab, ' ');
	tosort = malloc(sizeof(int) * ft_strrlen(split));
	if (!tosort)
		return (NULL);
	j = -1;
	while (split[++j])
	{
		if (!is_digit(split[j]))
		{
			write(1, "Error\n", 6);
			ft_free(split);
			free(tosort);
			return (NULL);
		}
		tosort[j] = ft_atoi(split[j]);
	}
	ft_free(split);
	return (tosort);
}

int	*ft_parse_two(char **tab, int ac)
{
	int	*tosort;
	int	j;

	tosort = malloc(sizeof(int) * ac - 1);
	if (!tosort)
		return (NULL);
	j = -1;
	while (tab[++j])
	{
		if (!is_digit(tab[j]))
		{
			write(1, "Error\n", 6);
			free(tosort);
			return (NULL);
		}
		tosort[j] = ft_atoi(tab[j]);
	}
	return (tosort);
}

int	*ft_parse(int ac, char **av)
{
	int	*tosort;

	if (ac == 2)
		tosort = ft_parse_one(av[1]);
	else if (ac > 2)
		tosort = ft_parse_two(av + 1, ac);
	else
		return (NULL);
	return (tosort);
}

int	ft_size(int ac, char **av)
{
	int		size;
	char	**temp;

	if (ac == 2)
	{
		temp = ft_split(av[1], ' ');
		size = ft_strrlen(temp);
		ft_free(temp);
	}
	else if (ac > 2)
		size = ac - 1;
	return (size);
}
