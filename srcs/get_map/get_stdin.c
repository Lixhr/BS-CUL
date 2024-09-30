/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:13:53 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 17:53:58 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

char	*ft_realloc(char *str)
{
	char	*joined;

	joined = malloc(sizeof(char) * (ft_strlen(str) * 2));
	if (joined == NULL)
		return (NULL);
	ft_strlcpy(joined, str, ft_strlen(str) +1);
	free(str);
	return (joined);
}

char	*print_stdin()
{
	char	*data;
	int	read_result;

	read_result = 1;
	data = malloc(10);
	while (read_result)
	{
		read_result = read(0, data, 1);
		if (read_result == -1)
		{
			free(data);
			return (NULL);
		}
		data = ft_realloc(data);
	}
	return (data);
}

int	main()
{

	printf("%s", print_stdin());
//	printf("test");

}