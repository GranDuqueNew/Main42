/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/16 20:02:59 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *str, size_t len)
{
	size_t cnt1;
	size_t cnt2;

	cnt2 = 0;
	while (dst[cnt2] != '\0' && cnt2 < len)
		cnt2++;
	cnt1 = cnt2;
	while (str[cnt2 - cnt1] && cnt2 + 1 < len)
	{
		dst[cnt2] = str[cnt2 - cnt1];
		cnt2++;
	}
	if (cnt1 < len)
		dst[cnt2] = '\0';
	return (cnt1 + ft_strlen(str));
}
/*
int main()
{
	// **Las funciones strlcpy () y strlcat () copian y concatenan cadenas respectivamente.
	// Están diseñados para ser reemplazos más seguros, más consistentes y menos propensos a errores para strncpy (3) 
	// y strncat (3). A diferencia de esas funciones, strlcpy () y strlcat () toman el tamaño completo del búfer (no solo la longitud) 
	// y garantizan la terminación NUL del resultado (siempre que el tamaño sea ​​mayor que 0 o, en el caso de strlcat (), 
	// siempre que haya al menos un byte libre en dst ). Tenga en cuenta que debe incluirse un byte para NUL en el tamaño. 
	// También tenga en cuenta que strlcpy () y strlcat() solo operan en cadenas verdaderas en '' C ''. 
	// Esto significa que para strlcpy () str debe tener terminación NUL y para strlcat () 
	// tanto str como dst deben tener terminación NUL.

	// La función strlcat(char *dst, const char *str, size_t len):
	// Copia hasta el tamaño - 1 caracteres de la cadena str terminada en NUL a dst,
	// terminando en NUL el resultado.

   const char str[] = "Jose";
   char dst1[50]="";
   char dst2[50]="";
   int sal;

   printf("**********PROPIA**********\n");
   printf("str1: %s\n", str);
   sal = ft_strlcat(dst1, str, 5);
   printf("Salida: %d\n", sal);
   printf("dst: %s\n", dst1);

   printf("**********ORIGINAL**********\n");
   printf("str: %s\n", str);
   sal = strlcat(dst2, str, 5);
   printf("Salida: %d\n", sal);
   printf("dst: %s\n", dst2);

   return (0);
}
*/
