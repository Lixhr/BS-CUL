/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 08:22:25 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 10:43:11 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	solve(char *path)
{	
	t_sq_mat	matrix;
	char	*map;

	map = get_map(path);
	if (map == NULL)
		return (1);
	if (check_charset(map))
		return (1);
	fill_charset(&matrix, map);

	if (check_str(&matrix, map))
		return (1);


	printf("error  >>> %s", map);
	
	free(map);
	return (0);
}






