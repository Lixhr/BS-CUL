/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_mat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:52:39 by acabon            #+#    #+#             */
/*   Updated: 2024/10/01 17:32:39 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

t_max_sq_mat	ft_max_sq(t_sq_mat sq_mat)
{
	t_max_sq_mat	max_sq_mat;
	int				i;
	int				j;

	max_sq_mat.size = sq_mat.sq[0][0];
	i = 0;
	while (i < sq_mat.y)
	{
		j = 0;
		while (j < sq_mat.x)
		{
			if (max_sq_mat.size < sq_mat.sq[i][j])
			{
				max_sq_mat.size = sq_mat.sq[i][j];
				max_sq_mat.x = j - max_sq_mat.size + 1;
				max_sq_mat.y = i - max_sq_mat.size + 1;
			}
			j++;
		}
		i++;
	}
	return (max_sq_mat);
}

// pour test :

void	ft_putsq_test(t_sq_mat sq_mat)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < sq_mat.y)
	{
		j = 0;
		while (j < sq_mat.x)
		{
			if (j != 0)
				write(1, " ", 1);
			c = sq_mat.sq[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_putsq(t_sq_mat sq_mat)
{
	t_max_sq_mat	max_sq_mat;
	int				i;
	int				j;

	max_sq_mat = ft_max_sq(sq_mat);
	if (max_sq_mat.size == 0)
		return (1);
	i = 0;
	while (++i < sq_mat.y)
	{
		j = 0;
		while (++j < sq_mat.x)
		{
			if (j >= max_sq_mat.x && j < max_sq_mat.x + max_sq_mat.size
				&& i >= max_sq_mat.y && i < max_sq_mat.y + max_sq_mat.size)
				write(1, "X", 1);
			else if (sq_mat.sq[i][j] == 0)
				write(1, "o", 1);
			else
				write(1, ".", 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
