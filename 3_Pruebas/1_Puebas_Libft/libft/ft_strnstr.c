/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/11 18:55:08 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *strBig, const char *strlittle, size_t len)
{
   size_t cnt1;
   size_t cnt2;

   cnt1 = 0;
   cnt2 = 0;

   if (!*strlittle)
      return ((char *)strBig);
   while (strBig[cnt1] != '\0' && cnt1 < len)
   {
      if (strBig[cnt1] == strlittle[0])
      {
         while (strlittle[cnt2] != '\0' && strBig[cnt1 + cnt2] == strlittle[cnt2] && cnt1 + cnt2 < len)
         {
            if (strlittle[cnt2 + 1] == '\0')
               return ((char *)&strBig[cnt1]);
            cnt2++;
         }
      }
      cnt1++;
   }
   return (NULL);
}
/*
int main()
{
   // La función char *ft_strnstr(const char *strBig, const char *strlittle, size_t len):
   // Localice la subcadena, donde no se buscan más de los caracteres 'len'.
   // Encuentra la primera aparición de la subcadena 'strlittle' en la cadena 'strBig'.
   // Los bytes nulos de terminación ('\ 0') no se comparan.

   const char str[] = "Jose Andres Duque Pantoja";
   const char str2[] = "Duque";
   char *sal1;
   char *sal2;

   printf("**********PROPIA**********\n");
   printf("str: %s\nstr 2: %s\n", str,str2);
   sal1 = ft_strnstr(str, str2, 25);
   printf("Salida: %s\n", sal1);

   printf("**********ORIGINAL**********\n");
   printf("str: %s\nstr 2: %s\n", str,str2);
   sal2 = strnstr(str, str2, 25);
   printf("Salida: %s\n", sal2);

   return (0);
}
*/
