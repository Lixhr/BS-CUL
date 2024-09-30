/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:06 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 15:31:19 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_MAP_H
# define GET_MAP_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "./bsq.h"

typedef struct	s_sq_mat t_sq_mat;

char	*get_stdin(void);
char	*get_file(char *path);
char    *get_map(char *path);
int		check_charset(char *str);
void	fill_charset(t_sq_mat *matrix, char *data);
int	get_atoi_index(char *str);

#endif