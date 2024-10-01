/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_charset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:40:00 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 10:20:39 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

int	check_doubles_chars(char *str)
{
	int	index;

	while (*(str + 1) != '\n')
	{
		index = 1;
		while (str[index] != '\n')
		{
			if (*str == str[index])
				return (1);
			index ++;
		}
		str ++;
	}
	return (0);
}

int	check_printables(char *str)
{
	while (*str != '\n')
	{
		if (!(*str >= 32 && *str <= 126))
			return (1);
		str ++;
	}
	return (0);
}

int	check_numerics(char *str, int index)
{
	int	counter;

	counter = 0;
	while (counter < index)
	{
		if (!(str[counter] <= '9' && str[counter] >= '0'))
			return (1);
		counter ++;
	}
	return (0);
}

int	check_charset(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\n')
		index ++;
	if (index -1 < 3)
		return (1);
	index -= 3;
	if (check_doubles_chars(&str[index])
		|| check_printables(&str[index])
		|| check_numerics(str, index)
		|| ft_atoi(str, index) == 0)
		return (1);
	return (0);
}
