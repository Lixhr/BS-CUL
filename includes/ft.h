/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:31:56 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 15:51:33 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_atoi(char *str, int max);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlcpy(char *dest, char *src, int size);
char	*ft_strdup(char *src);
void	ft_fill_buffer(char *str, int size);
void	ft_putstr(char *str);
int		ft_putstr_error(char *str);

#endif