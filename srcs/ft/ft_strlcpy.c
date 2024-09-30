/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 08:26:13 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 17:21:01 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	if (size > 0)
	{
		while (src[counter] && (counter < size -1))
		{	
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\x00';
	}
	while (src[counter])
		counter ++;
	return (counter);
}
