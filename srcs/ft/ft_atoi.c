/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:32:10 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 13:49:54 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*skip_spaces(char *str)
{
	while ((*str >= 9 && *str <= 13) || (*str == ' ' ))
	{
		str ++;
	}
	return (str);
}

short	get_sign(char *str)
{
	short	counter;

	counter = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str ++;
	while ((*str == '+' || *str == '-'))
	{
		counter += (*str == '-');
		str ++;
	}
	return (counter % 2);
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
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
		if (index < max-1)
			number *= 10;
		index ++;
	}
	return (number);
}