/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/16 20:02:59 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
   size_t cnt;

   cnt = 0;
   while (str[cnt] != '\0')
      cnt++;
   return (cnt);
}
/*
int main()
{
// La función strlen(const char *str):
// Calcula la longitud de la cadena str, 
// pero sin incluir el carácter nulo de terminación.

   const char str1[] = "Jose Andres";
   int sal;

   printf("**********PROPIA**********\n");
   printf("str1: %s\n", str1);
   sal = ft_strlen(str1);
   printf("Salida: %d\n", sal);

   printf("**********ORIGINAL**********\n");
   printf("str1: %s\n", str1);
   sal = strlen(str1);
   printf("Salida: %d\n", sal);

   return (0);
}
*/