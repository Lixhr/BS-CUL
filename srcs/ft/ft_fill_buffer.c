/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:13:53 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:16:22 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

void	ft_fill_buffer(char *str, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		str[index] = '\x0';
		index ++;
	}
}
