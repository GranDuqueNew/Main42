/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:30:58 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/18 12:53:31 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	contador;

	contador = 0;
	while (*(src + contador) != 0)
	{
		*(dest + contador) = *(src + contador);
		contador++;
	}
	*(dest + contador) = 0;
	return (dest);
}

/*
int main(void)
{
	char cadena1[] = "Jose";
	char cadena2[] = "Andres";

	printf("%s\n", cadena1);
	ft_strcpy(cadena1, cadena2);
	printf("%s\n", cadena1);
	return (0);
}
*/
