/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:58:52 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 17:40:07 by cbeaufil         ###   ########.fr       */
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
		{
			solve(argv[file_counter]);
			if (file_counter < argc -1)
				ft_putstr("\n");
		}
	}
	return (0);
}