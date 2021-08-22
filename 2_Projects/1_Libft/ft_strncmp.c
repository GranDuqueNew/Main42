/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/17 23:10:42 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t len)
{
      unsigned char *str1Tem;
      unsigned char *str2Tem;
      size_t cnt;
  
      str1Tem = (unsigned char *)str1;
      str2Tem = (unsigned char *)str2;
      cnt = 0;
      while (str1[cnt] != '\0' && str2[cnt] != '\0' && cnt < len && str1Tem[cnt] == str2Tem[cnt]) 
      {                                                                                     
              cnt++;
      }
      if (cnt == len) 
          return (0);
      return (str1Tem[cnt] - str2Tem[cnt]); 
}
/*
int main()
{
   // ++La función int strcmp (const char * str1, const char * str2):
   // compara las dos cadenas str1 y str2. Devuelve un número entero menor que,
   // igual o mayor que cero si se encuentra que str1, respectivamente,
   // es menor que, coincide o es mayor que str2
   // ++int strncmp (const char * str1, const char * str2, size_t len):
   // Es similar, excepto que solo compara los primeros (como máximo) len bytes de str1 y str2.

   const char str[] = "Jose Andres Duque";
   const char str2[] = "Jose E";
   int salida1;
   int salida2;

   printf("**********PROPIA**********\n");
   printf("str1: %s\n", str);
   printf("str2: %s\n", str2);
   salida1 = strncmp(str, str2, 6);
   printf("Salida: %d\n", salida1);

   printf("**********ORIGINAL**********\n");
   printf("str1: %s\n", str);
   printf("str2: %s\n", str2);
   salida2 = strncmp(str, str2, 6);
   printf("Salida: %d\n", salida2);

   return (0);
}
*/