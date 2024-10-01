/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:09:23 by acabon            #+#    #+#             */
/*   Updated: 2024/10/01 11:32:44 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

int	verif_str(t_sq_mat *sq_mat, char *str, int *pt, int *nb_col)
{
	int	j;
	
	j = 0;
	if (!(*nb_col) && sq_mat->x)
		*nb_col = sq_mat->x;
	while (str[*pt] && str[*pt] != '\n')
	{
		if (str[*pt] != sq_mat->obstacle_c && str[*pt] != sq_mat->void_c)
				return (-1);
		(*pt)++;
		j++;
	}
	if (*nb_col && *nb_col != j)
		return (-1);
	if (str[*pt] == '\n')
		(*pt)++;
	if (sq_mat->x == 0)
		sq_mat->x = j;
	return (j);
}

int	check_str(t_sq_mat *sq_mat, char *str)
{
	int	i;
	int	j;
	int	pt;
	int	nb_col;

	sq_mat->x = 0;
	nb_col = 0;
	i = 0;
	j = 0;
	pt = 0;
	while (str[pt] != '\n')
		pt++;
	while (str[pt])
	{
		j = verif_str(sq_mat, str, &pt, &nb_col);
		if (j == -1)
			return (1);
		i++;
	}
	if (ft_atoi(str, get_atoi_index(str))
		&& ft_atoi(str, get_atoi_index(str)) != i - 1)
		return (1);
	sq_mat->x = j + 1;
	sq_mat->y = i + 1;
	return (0);
}
