/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:32:10 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 19:14:47 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_atoi_index(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\n')
		index ++;
	return (index -3);
}

int	ft_atoi(char *str, int max)
{
	short	sign;
	int		number;
	int		index;

	number = 0;
	index = 0;
	while (index < max)
	{
		number += str[index] - '0';
		if (index < max - 1)
			number *= 10;
		index ++;
	}
	return (number);
}
