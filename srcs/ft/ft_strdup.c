/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:13:14 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:16:14 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../../includes/ft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*tmp;

	dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	tmp = dest;
	while (*src)
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\x00';
	return (tmp);
}
