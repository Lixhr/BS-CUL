/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:12:54 by cbeaufil          #+#    #+#             */
/*   Updated: 2024/09/19 10:33:24 by cbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*starting_ptr;

	starting_ptr = dest;
	while (*dest)
	{
		dest ++;
	}
	while (*src)
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\x00';
	return (starting_ptr);
}
/*
int	main()
{
    char test1_dest[100] = "Hello, ";
    char test1_src[] = "World!";
    
    char test2_dest[100] = "Bonjour, ";
    char test2_src[] = "le monde!";
    
    char test3_dest[100] = "";
    char test3_src[] = "Chaîne vide au départ";
    
    char test4_dest[100] = "Test ";
    char test4_src[] = "";

    printf("Test 1 avec strcat: %s\n", strcat(test1_dest, test1_src));
    
    strcpy(test1_dest, "Hello, ");
    
    printf("Test 1 avec ft_strcat: %s\n", ft_strcat(test1_dest, test1_src));

    printf("Test 2 avec strcat: %s\n", strcat(test2_dest, test2_src));
    strcpy(test2_dest, "Bonjour, ");
    printf("Test 2 avec ft_strcat: %s\n", ft_strcat(test2_dest, test2_src));

    printf("Test 3 avec strcat: %s\n", strcat(test3_dest, test3_src));
    strcpy(test3_dest, "");
    printf("Test 3 avec ft_strcat: %s\n", ft_strcat(test3_dest, test3_src));

    printf("Test 4 avec strcat: %s\n", strcat(test4_dest, test4_src));
    strcpy(test4_dest, "Test ");
    printf("Test 4 avec ft_strcat: %s\n", ft_strcat(test4_dest, test4_src));
}*/
