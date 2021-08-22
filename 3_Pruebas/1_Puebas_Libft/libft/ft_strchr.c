
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/06/02 17:16:27 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int chr)
{
  while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)chr)
			return ((char *)str);
		str++;
	}
	if (chr == 0)
		return ((char *)str);
	return (NULL);
}
/*
int main()
{
   // La función strchr(const char *str, int chr):
   // Devuelve un puntero a la primera aparición
   // del carácter chr en la cadena str .

   const char str[] = "JoseAndres.DuquePantoja";
   char ch = '.';
   char *sal1;
   char *sal2;

   printf("**********PROPIA**********\n");
   printf("Entrada: %s\n", str);
   sal1 = ft_strchr(str, ch);
   printf("Salida: %s\n", sal1);

   printf("**********ORIGINAL**********\n");
   printf("Entrada: %s\n", str);
   sal2 = strchr(str, ch);
   printf("Salida: %s\n", sal2);

   return (0);
}
*/