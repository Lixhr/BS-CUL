/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:12:54 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:16:06 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*starting_ptr;

	starting_ptr = dest;
	while (*dest)
	{
		dest ++;
	}
	while (*src)
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\x00';
	return (starting_ptr);
}
