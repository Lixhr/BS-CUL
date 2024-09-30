/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:16 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:11:37 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

char	*get_map(char *path)
{
	char	*map;

	if (path == NULL)
		map = get_stdin();
	else
		map = get_file(path);
	if (map == NULL)
		return (NULL);
	return (map);
}

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
