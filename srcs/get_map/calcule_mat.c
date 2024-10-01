/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcule_mat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:51:32 by acabon            #+#    #+#             */
/*   Updated: 2024/10/01 14:10:52 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

int	**ft_init_sq(int x, int y)
{
	int	**mat_int;
	int	i;
	int	j;

	mat_int = (int **)malloc(y * sizeof(int *));
	if (mat_int == NULL)
		return (NULL);
	i = 0;
	while (i < y)
	{
		mat_int[i] = (int *)malloc(x * sizeof(int));
		if (mat_int[i] == NULL)
		{
			while (--i >= 0)
				free(mat_int[i]);
			return (free(mat_int), NULL);
		}
		j = -1;
		while ((i == 0 && ++j < x) || ++j == 0)
			mat_int[i][j] = 0;
		i++;
	}
	return (mat_int);
}

int	min_sq_nb(t_sq_mat sq_mat, int x, int y)
{
	int	nb;

	nb = sq_mat.sq[y - 1][x];
	if (sq_mat.sq[y - 1][x - 1] < nb)
		nb = sq_mat.sq[y - 1][x - 1];
	if (sq_mat.sq[y][x - 1] < nb)
		nb = sq_mat.sq[y][x - 1];
	return (nb);
}

void	ft_sq_mat(char *str, t_sq_mat *sq_mat)
{
	int	i;
	int	j;

	(*sq_mat).sq = ft_init_sq((*sq_mat).x, (*sq_mat).y);
	while (*str != '\n')
		str++;
	i = 0;
	while (*str)
	{
		if (*str == '\n')
		{
			i++;
			j = 0;
		}
		else if (*str == (*sq_mat).obstacle_c)
		{
			(*sq_mat).sq[i][j] = 0;
		}
		else if (*str == (*sq_mat).void_c)
			(*sq_mat).sq[i][j] = 1 + min_sq_nb(*sq_mat, j, i);
		j++;
		str++;
	}
}
