/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:02:23 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/20 20:54:51 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	Contador_1;
	unsigned int	Contador_2;

	Contador_1 = 0;
	Contador_2 = 0;
	while (dest[Contador_1])
	{
		Contador_1++;
	}
	while ((Contador_2 < nb) && src[Contador_2])
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
//Retonar  x caracteres de origen en destino
	char str1[] = "Jose";
	char str2[] = "Andres";
	printf("%s\n", ft_strncat(str1, str2,4));
	return (0);
}
*/
