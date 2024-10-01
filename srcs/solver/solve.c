/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 08:22:25 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 13:30:01 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	solve(char *path)
{	
	t_sq_mat	matrix;
	char	*map;

	map = get_map(path);
	if (map == NULL)
		return (ft_putstr_error("get map error\n"));
	if (check_charset(map))
		return (free(map),ft_putstr_error("check_charset error\n"));
	fill_charset(&matrix, map);
	if (check_str(&matrix, map))
		return (free(map), ft_putstr_error("check_str error\n"));
	printf("%s\n\n\n", map);
	ft_sq_mat(map, &matrix);
	//ft_putsq_test(matrix);
	ft_putsq(matrix);
	
	free(map);
	ft_putstr("\n\n\n");
	return (0);
}