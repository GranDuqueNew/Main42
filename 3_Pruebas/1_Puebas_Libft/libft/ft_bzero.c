/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:17:35 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/16 20:50:16 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*strTem;

	strTem = (unsigned char *)str;
	while (len--)
	{
		*strTem++ = '\0';
	}
}
/*
int main()
{
    //  La función bzero(void *str, size_t len):
    //  Borra los datos en los len bytes de la memoria
    //  comenzando en la ubicación señalada por str, escribiendo ceros 
    //  (bytes que contiene '\0') a esa área.
    
	char str[]="Jose Andres Duque";
    char str2[]="Jose Andres Duque";

    printf("**********PROPIA**********\n");
	printf("Entrada: %s\n", str);
	ft_bzero(str, 4);
	printf("Salida: %s\n", str);
    
    printf("**********ORIGINAL**********\n");
	printf("Entrada: %s\n", str2);
	bzero(str2, 4);
	printf("Salida: %s\n", str2);

	return (0);
}
*/