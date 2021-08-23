/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:17:35 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *str, size_t len)
{
	unsigned char	*dstTem;
	unsigned char	*strTem;

	dstTem = (unsigned char *)dst;
	strTem = (unsigned char *)str;
	if (!dst && !str)
		return (dst);
	if (str < dst)
		while (len--)
			dstTem[len] = strTem[len];
	else
		while (len--)
			*dstTem++ = *strTem++;
	return (dst);
}
/*
int main()
{
	//  La función memmove(void *dst, const void *str, size_t len):
	//  Copia len bytes de la memoria de str a dst. 

	const char str[50] = "Jose Andres duque";
	char dest[50] = "";
	char dest2[50] = "";

	printf("**********PROPIA**********\n");
	printf("Entrada: %s\n", str);
	ft_memmove(dest, str, 10);
	printf("Salida: %s\n", dest);

	printf("**********ORIGINAL**********\n");
	printf("Entrada: %s\n", str);
	memmove(dest2, str, 10);
	printf("Salida: %s\n", dest2);

	return (0);
}
*/