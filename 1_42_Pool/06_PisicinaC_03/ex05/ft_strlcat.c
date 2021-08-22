/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:30:12 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 20:41:20 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlength(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	Contador_1;
	unsigned int	Contador_2;

	Contador_1 = 0;
	Contador_2 = 0;
	while (dest[Contador_1] && Contador_1 < size)
		Contador_1++;
	Contador_2 = Contador_1;
	while (src[Contador_1 - Contador_2] && Contador_1 + 1 < size)
	{
		dest[Contador_1] = src[Contador_1 - Contador_2];
		Contador_1++;
	}
	if (Contador_2 < size)
		dest[Contador_1] = '\0';
	return (Contador_2 + ft_strlength(src));
}

int main()
{
	//Sustituir subcadena en cadena con el tamaño correcto
	char cadena1[] = "Jose Andres\0 Jose andres";
	char cadena2[] = " Duque";
	printf("%d\n", ft_strlcat(cadena1, cadena2, 18));
	printf("%s\n", cadena1);
	char cadena00[] = "Jose Andres\0 Jose andres Jose Andres Jose Andres";
	printf("%lu\n", strlcat(cadena00, cadena2, 11));
	printf("%s\n", cadena00);
	return (0);
}

