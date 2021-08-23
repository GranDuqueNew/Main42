/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:16:43 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*strTem;
	size_t			cnt;

	strTem = (unsigned char *)str;
	cnt = 0;
	while (len > cnt)
	{
		if (strTem[cnt] == (unsigned char)c)
			return (&strTem[cnt]);
		cnt++;
	}
	return (NULL);
}
/*
int main()
{
	// La función memchr(const void *str, int c, size_t len):
	// Busca la primera aparición del carácter c (un carácter sin signo) 
	// en los primeros len bytes de la cadena a la que apunta, por el argumento str.

	const char str[] = "JoseAndres.DuquePantoja";
	const char ch = '.';
	char *sal1;
	char *sal2;

	printf("**********PROPIA**********\n");
	printf("Entrada: %s\n", str);
	ft_memchr(str,ch, 20);
	sal1 = memchr(str, ch, 20);
	printf("Salida: %s\n", sal1);

	printf("**********ORIGINAL**********\n");
	printf("Entrada: %s\n", str);
	sal2 = memchr(str, ch, 20);
	printf("Salida: %s\n", sal2);

	return (0);
}
*/
