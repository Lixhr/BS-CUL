/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:45:16 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:05:41 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

void	fill_charset(t_sq_mat *matrix, char *data)
{
	while (*data != '\n')
		data ++;
	data --;
	matrix->full_c = *data;
	data --;
	matrix->obstacle_c = *data;
	data --;
	matrix->void_c = *data;
}
