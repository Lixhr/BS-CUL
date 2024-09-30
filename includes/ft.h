/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:31:56 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 17:21:07 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int	ft_atoi(char *str, int max);
int	ft_strlen(char *str);
int	ft_strcat(char *src, char *dest);
char	*ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif