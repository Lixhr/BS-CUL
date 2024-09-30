/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:16 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 13:54:25 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

char    *get_map(char *path)
{
	char	*map;

	// if (path == NULL)
	// 	//stdin
	// else
	map = get_file(path);
	if (map == NULL)
		return (NULL);
	return (map);
}


int main(int argc , char **argv)
{
	t_sq_mat	matrix;
	
	char	*str_map = get_map("./map.txt");
	// /printf("%s", str_map);
	printf("%d", check_charset(str_map));
	if (check_charset(str_map))
		return (1);
	fill_charset(&matrix, str_map);
	free(str_map);
}