/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/17 23:13:42 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t len)
{
   unsigned char *str1Tem;
   unsigned char *str2Tem;
   size_t cnt;

   str1Tem = (unsigned char *)str1;
   str2Tem = (unsigned char *)str2;
   cnt = 0;
   while (cnt < len)
   {
      if (str1Tem[cnt] != str2Tem[cnt])
         return (str1Tem[cnt] - str2Tem[cnt]);
      cnt++;
   }
   return (0);
}
/*
int main()
{
   // La función memcmp(const void *str1, const void *str2, size_t len):
   // Compara los primeros len bytes del área de memoria str1 
   // y el área de memoria str2 .
   
   const char str1[50] = "Jose Andres";
   const char str2[50] = "Jose ";
   int sal;

   printf("**********PROPIA**********\n");
   printf("str1: %s\n", str1);
   printf("str2: %s\n", str2);
   sal = ft_memcmp(str1, str2, 10);
   printf("Salida(0 iguales): %d\n", sal);

   printf("**********ORIGINAL**********\n");
   printf("str1: %s\n", str1);
   printf("str2: %s\n", str2);
   sal = memcmp(str1, str2, 10);
   printf("Salida(iguales): %d\n", sal);

   return (0);
}
*/