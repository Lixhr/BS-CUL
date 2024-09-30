/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:16 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:18:39 by cbeaufil         ###   ########.fr       */
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
