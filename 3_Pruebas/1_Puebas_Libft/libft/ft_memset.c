/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:53:25 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/17 23:13:30 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
	size_t cnt;
	unsigned char *strTem;

	strTem = (unsigned char *)str;
	cnt = 0;
	while (cnt < len)
	{
		*(strTem + cnt) = (unsigned char)c;
		cnt++;
	}
	return (str);
}
/*
int main()
{
	// La función memset(void *str, int c, size_t len):
	// Llena los primeros len bytes del área de memoria
	// apuntado por str con el byte constante c.
    
	char str[]="Jose Andres Duque";
    char str2[]="Jose Andres Duque";

    printf("**********PROPIA**********\n");
	printf("Entrada: %s\n", str);
	ft_memset(str, '$', 4);
	printf("Salida: %s\n", str);
	
    printf("**********ORIGINAL**********\n");
	printf("Entrada: %s\n", str2);
	memset(str2, '$', 4);
	printf("Salida: %s\n", str2);

	return (0);
}
*/