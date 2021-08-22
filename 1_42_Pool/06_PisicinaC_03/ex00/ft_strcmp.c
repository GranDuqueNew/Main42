/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:24:20 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/21 19:44:26 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main()
{
	//Comparacion de cadenas: 0 iguales
	char cadena1[] = "Igual";
	char cadena2[] = "Igual";

	printf("%u\n", ft_strcmp(cadena1, cadena2));
	printf("%u\n", strcmp(cadena1, cadena2));

	char cadena3[] = "Desigual";
	char cadena4[] = "DesigualNo";

	printf("%u\n", ft_strcmp(cadena3, cadena4));
	printf("%u\n", strcmp(cadena3, cadena4));

	char cadena5[] = "    ¿\0\n*ñ    =";
	char cadena6[] = "    ¿\0\n*ñ     =";

	printf("%u\n", ft_strcmp(cadena5, cadena6));
	printf("%u\n", strcmp(cadena5, cadena6));
}

