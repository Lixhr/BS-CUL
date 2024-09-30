/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:12:43 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 12:34:09 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

int	get_file_size(char *path)
{
	int		fd;
	int		size;
	char	buf;
	short	read_result;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	read_result = 1;
	size = 0;
	while (read_result)
	{
		read_result = read(fd, &buf, 1);
		if (read_result == -1)
		{
			close(fd);
			return (-1);
		}
		size ++;
	}
	if (close(fd) == -1)
		return (-1);
	return (size);
}

char	*get_file(char *path)
{
	int	size;
	char *file;
	int	fd;

	size = get_file_size(path);
	if (size == -1)
		return (NULL);
	file = malloc(sizeof(char) * (size));
	if (file == NULL)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd == -1 || read(fd, file, size) == -1 || close(fd) == -1)
	{
		free(file);
		return (NULL);
	}
	return (file);
}