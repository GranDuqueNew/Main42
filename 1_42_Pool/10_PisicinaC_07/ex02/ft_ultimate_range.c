/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:56:28 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/26 20:56:55 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	contador;

	contador = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		*(*range + contador) = min;
		min++;
		contador++;
	}
	return (contador);
}
/*
int main()
{
	int *range;
	int tamano;
	int contador;

	printf("A= %p\n", range);
	tamano = ft_ultimate_range(&range, 0, 5);
	printf("D= %p\n", range);

	printf("tamaño = %d\n", tamano);
	if (!range)
	{
		printf("NULL\n");
		return (0);
	}

	while (contador < tamano)
	{
		printf("%d ", range[contador]);
		contador++;
	}
	free(range);
	return (0);
}
*/
