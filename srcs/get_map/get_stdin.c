/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:13:53 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 17:21:17 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

char	*ft_realloc(char *str, int size, int l)
{
	char	*joined;

	joined = malloc(sizeof(char) * (size * 2));
	if (joined == NULL)
		return (NULL);
	ft_strlcpy(joined, str);
	free(str);
	return (joined);
}

void	print_stdin()
{
	char	*data;
	int	counter;
	int	read_result;

	read_result = 1;
	data = malloc(10);
	while (read_result)
	{
		read_result = read(0, data, 10);
		if (read_result == -1)
		{
			free(data);
			return ;
		}
		data = ft_realloc(data, 10, read_result);
	}
	printf("%s", data);
	free(data);
}

int	main()
{

	print_stdin();
//	printf("test");

}