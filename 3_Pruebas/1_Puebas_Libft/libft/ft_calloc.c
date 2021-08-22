/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 21:42:49 by GranDuque         #+#    #+#             */
/*   Updated: 2021/08/22 18:57:14 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t len)
{
   void *mem;
                  
   if (!(mem = malloc(nmem * len)))
      return (NULL);
   ft_bzero(mem, (nmem * len));
   return (mem);
}
/*
int main()
{
   // La función ft_calloc(size_t memb, size_t len):
   // Asigna suficiente espacio para contar objetos que tienen un tamaño de bytes de memoria
   // cada uno y devuelve un puntero a la memoria asignada.
   // La memoria asignada se llena con bytes de valor cero

   int i, n;
   int *a;

   printf("Numeros a ingresar：");
   scanf("%d", &n);

   a = (int *)calloc(n, sizeof(int));
   printf("Ingrese %d números：\n", n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }

   printf("Ingresado：");
   for (i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }

   return (0);
}
*/
