/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:33:09 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 10:53:58 by acabon           ###   ########.fr       */
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

t_max_sq_mat	ft_max_sq(t_sq_mat sq_mat);
void	ft_putsq(t_sq_mat sq_mat);
int **ft_init_sq(int x, int y);
int min_sq_nb(t_sq_mat sq_mat, int x, int y);
void ft_sq_mat(char *str, t_sq_mat *sq_mat);
int	check_str(t_sq_mat *sq_mat, char *str);
int	verif_str(t_sq_mat *sq_mat, char *str, int *pt, int *nb_col);
int	solve(char *path);
#endif