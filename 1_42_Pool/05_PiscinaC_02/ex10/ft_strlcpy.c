/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:55:22 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/20 19:04:12 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	contador;

	contador = 0;
	while (src[contador])
		contador++;
	if (size == 0)
		contador = 0;
	contador = 0;
	while (src[contador] && contador < size - 1)
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = '\0';
	contador = 0;
	while (src[contador])
		contador++;
	return (contador);
}

int main(void)
{
	char dest[11]="ASD";
	char cadena[] = "JoseAndres";
	printf("%u\n", ft_strlcpy(dest, cadena, 3));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest, cadena, 3));
	printf("%s\n", dest);
	return (0);
}

