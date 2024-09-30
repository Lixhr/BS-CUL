/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:32:10 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 12:34:02 by cbeaufil         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	short	sign;
	int		number;

	sign = get_sign(str);
	str = skip_spaces(str);
	while (*str == '+' || *str == '-')
		str ++;
	number = 0;
	while (is_number(*str))
	{
		number += *str -48;
		str ++;
		if (is_number(*str))
			number *= 10;
	}
	if (sign)
		number *= -1;
	return (number);
}