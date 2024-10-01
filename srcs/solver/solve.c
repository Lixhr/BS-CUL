/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 08:22:25 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 13:16:41 by acabon           ###   ########.fr       */
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

	// printf("%s", map);

	ft_sq_mat(map, &matrix);

	printf("\n\n\n\n\n");



	ft_putsq_test(matrix);
	ft_putsq(matrix);
	
	free(map);
	ft_putstr("\n");
	return (0);
}