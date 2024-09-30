/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:58:52 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:03:18 by cbeaufil         ###   ########.fr       */
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
