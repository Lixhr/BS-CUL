/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:58:52 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 08:24:35 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	main(int argc, char **argv)
{
	int	file_counter;

	if (argc == 1)
		solve(NULL);
	else
	{
		file_counter = 0;
		while (++file_counter < argc)
			solve(argv[file_counter]);
	}
}

/*
int	main(int argc, char **argv)
{
	t_sq_mat	matrix;
	char		*str_map;

	str_map = get_map("./map.txt");
	if (check_charset(str_map))
		return (1);
	fill_charset(&matrix, str_map);
	free(str_map);
}


 */