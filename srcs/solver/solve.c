/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 08:22:25 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 15:45:46 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	solve(char *path)
{
	t_sq_mat	matrix;
	char		*map;

	map = get_map(path);
	if (map == NULL)
		return (ft_putstr_error("get map error\n"));
	if (check_charset(map))
		return (free(map), ft_putstr_error("check_charset error\n"));
	fill_charset(&matrix, map);
	if (check_str(&matrix, map))
		return (free(map), ft_putstr_error("check_str error\n"));
	ft_sq_mat(map, &matrix);
	if (ft_putsq(matrix))
		return (free_data(map, matrix.sq, matrix.y),
			ft_putstr_error("full map error\n"));
	free_data(map, matrix.sq, matrix.y);
	ft_putstr("\n");
	return (0);
}
