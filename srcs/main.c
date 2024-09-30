/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:58:52 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:18:49 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	main(int argc, char **argv)
{
	int	file_counter;
	char	*map;

	if (argc == 1)
	{
		map = get_map(NULL);
		printf("%s", map);
	}
	else
	{
		file_counter = 0;
		while (++file_counter < argc)
		{
			map = get_map(argv[file_counter]);
			printf("%s", map);
		}
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