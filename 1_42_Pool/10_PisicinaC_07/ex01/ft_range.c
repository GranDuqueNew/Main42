/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:56:28 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/26 20:54:09 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*memoria;
	int	contador;

	contador = 0;
	if (min >= max)
		return (0);
	memoria = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		*(memoria + contador) = min;
		min++;
		contador++;
	}
	return (memoria);
}
/*
int main()
{
	int *range = ft_range(-5, 19);
	int contador=0;;

	if (range == NULL)
	{
		printf("Valor nulo \n");
		return (0);
	}

	while (contador < 24)
	{
		printf("%d ", range[contador]);
		contador++;
	}

	free(range);

}
*/
