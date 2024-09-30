/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:39:56 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:14:20 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\x00')
	{
		*dest = *src;
		dest ++;
		src++;
	}
	*dest = '\x00';
	return (dest_start);
}
