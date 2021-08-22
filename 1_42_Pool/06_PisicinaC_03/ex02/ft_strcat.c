/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:02:23 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/20 20:51:47 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	Contador_1;
	int	Contador_2;

	Contador_1 = 0;
	Contador_2 = 0;
	while (dest[Contador_1])
	{
		Contador_1++;
	}
	while (src[Contador_2])
	{
		dest[Contador_1 + Contador_2] = src[Contador_2];
		Contador_2++;
	}
	dest[Contador_1 + Contador_2] = '\0';
	return (dest);
}
/*
int main()
{
//Retonar las dos cadenas
	char str1[] = "Jose";
	char str2[] = " Andres ";
	printf("%s\n", ft_strcat(str1, str2));
	return (0);
}
*/
