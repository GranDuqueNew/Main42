/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:34:48 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *str, size_t len)
{
	unsigned char	*dstTem;
	unsigned char	*strTem;
	size_t			cnt;

	dstTem = (unsigned char *)dst;
	strTem = (unsigned char *)str;
	cnt = 0;
	if (dst == NULL && str == NULL)
		return (NULL);
	while (cnt < len)
	{
		dstTem[cnt] = strTem[cnt];
		cnt++;
	}
	return (dst);
}
/*
int main () 
{
	// La función memcpy(void *dst, const void *str, size_t n):
	// Copia len bytes del área de memoria str a área de memoria dst

	const char str[50] = "Jose Andres duque";
	char dest[50] = "ABCDEFGH";
	char dest2[50] = "ABCDEFGH";

	printf("**********PROPIA**********\n");
	printf("Entrada: %s\n", str);
	ft_memcpy(dest, str, 3);
	printf("Salida: %s\n", dest);

	printf("**********ORIGINAL**********\n");
	printf("Entrada: %s\n", str);
	memcpy(dest2, str, 3);
	printf("Salida: %s\n", dest2);

	return (0);
}
*/
