/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:33:09 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 12:58:25 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include "ft.h"
# include "get_map.h"

typedef struct	s_sq_mat
{
	int **sq;
	int	x;
	int	y;
	char	void_c;
	char	obstacle_c;
	char	full_c;
}	t_sq_mat;

typedef struct	s_max_sq_mat
{
	int	x;
	int	y;
	int	size;
}	t_max_sq_mat;

#endif