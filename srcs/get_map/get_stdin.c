/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <cbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:13:53 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/10/01 08:19:39 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"
#include "../../includes/ft.h"

char	*ft_realloc(char *data, char *str, int l)
{
	char	*joined;
	char	*res;

	joined = malloc(sizeof(char) * (l + 1));
	if (joined == NULL)
		return (NULL);
	joined[0] = 0;
	ft_strcat(joined, data);
	ft_strcat(joined, str);
	res = ft_strdup(joined);
	free(joined);
	free(data);
	return (res);
}

char	*get_stdin(void)
{
	char	*data;
	char	*buffer;
	int		read_result;

	read_result = 1;
	buffer = malloc(201);
	ft_fill_buffer(buffer, 200);
	data = ft_strdup("");
	while (read_result > 0)
	{
		read_result = read(0, buffer, 200);
		if (read_result == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_result] = '\0';
		data = ft_realloc(data, buffer, read_result + ft_strlen(data));
	}
	free(buffer);
	return (data);
}
