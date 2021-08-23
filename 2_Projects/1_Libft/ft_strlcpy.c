/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:28:30 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:24:51 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *str, size_t len)
{
	size_t	str_len;
	size_t	cnt;

	str_len = 0;
	cnt = 0;
	while (str[str_len] != '\0')
		str_len++;
	if (len == 0)
		return (str_len);
	while (str[cnt] != '\0' && cnt < (len - 1))
	{
		dst[cnt] = str[cnt];
		cnt++;
	}
	dst[cnt] = '\0';
	return (str_len);
}
/*
int main()
{
// **Las funciones strlcpy() y strlcat() copian y concatenan cadenas 
// respectivamente.Están diseñados para ser reemplazos más seguros, 
// más consistentes y menos propensos a errores para strncpy (3) y 
// strncat (3). A diferencia de esas funciones, strlcpy() y strlcat 
// () toman el tamaño completo del búfer (no solo la longitud) y garantizan 
// la terminación NUL del resultado (siempre que el tamaño sea ​​mayor que 0 o,
// en el caso de strlcat (), siempre que haya al menos un byte libre en dst ).
// Tenga en cuenta que debe incluirse un byte para NUL en el tamaño.
// También tenga en cuenta que strlcpy() y strlcat() solo operan en 
// cadenas verdaderas en '' C ''. Esto significa que para strlcpy() 
// str debe tener terminación NUL y para strlcat () 
// tanto str como dst deben tener terminación NUL.

// La función strlcpy(char *dst, const char *str, size_t len)
// Copia hasta el tamaño - 1 caracteres de la cadena str terminada en NUL a dst ,
// terminando en NUL el resultado.

   const char str[] = "Jose";
   char dst[3];
   int sal;

   printf("**********PROPIA**********\n");
   printf("str1: %s\n", str);
   sal = ft_strlcpy(dst, str, 3);
   printf("Salida: %d\n", sal);
   printf("dst: %s\n", dst);

   printf("**********ORIGINAL**********\n");
   printf("str: %s\n", str);
   sal = strlcpy(dst, str, 3);
   printf("Salida: %d\n", sal);
   printf("dst: %s\n", dst);

   return (0);
}
*/