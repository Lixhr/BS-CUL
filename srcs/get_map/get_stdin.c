/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabon <acabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:13:53 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/30 18:53:52 by acabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/bsq.h"
#include "../../includes/ft.h"

char	*ft_realloc(char *data, char *str, int size, int l)
{
	char	*joined;
	char	*res;

	joined = malloc(sizeof(char) * (l + 1));
	// joined = malloc(sizeof(char) * (1000 + 1));
	if (joined == NULL)
		return (NULL);
	// printf("%d\n", l);
	// printf("res = %s  |  %s   \n", data, str);
	joined[0] = 0;
	ft_strcat(joined, data);
	ft_strcat(joined, str);
	// printf("joined = %s  \n", joined);
	res = ft_strdup(joined);

	// printf("res = %s  |  %s   %d\n", joined, str, l +1);
	free(joined);
	free(data);
	return (res);
}

char *print_stdin()
{
	char	*data;
	char	*buffer;
	int	read_result;
	// int total_size;

	read_result = 1;
	// total_size = 0;
	buffer = malloc(11);
	// *buffer = 0;
	ft_fill_buffer(buffer, 10);
	data = ft_strdup("");
	while (read_result > 0)
	{
		read_result = read(0, buffer, 10);
		// total_size += read_result;
		if (read_result == -1)
		{
			free(buffer);
			return "";
		}
		buffer[read_result] = '\0';
		data = ft_realloc(data, buffer, 10,  read_result + ft_strlen(data));
			// printf("%s\n", data);
	}
		printf("%s\n", data);
		free(buffer);
	return (data);
}

int	main()
{

	char *data;
	data = print_stdin();
		printf("%s\n", data);
//	printf("test");
	free(data);
}