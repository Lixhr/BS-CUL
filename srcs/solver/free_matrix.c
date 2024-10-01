/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:10:56 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 14:21:03 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	free_matrix(int **matrix, int size)
{
	int	index;

	index = 0;
	while (index != size)
	{
		free(matrix[index]);
		index ++;
	}
	free(matrix);
}

void	free_data(char *map, int **matrix, int matrix_size)
{
	if (matrix_size != -1)
		free_matrix(matrix, matrix_size);
	free(map);
}
