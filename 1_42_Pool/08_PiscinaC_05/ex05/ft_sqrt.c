/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:07:21 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/25 14:05:46 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_sqrt(int nb)
{
	long int	contador;
	long int	x;

	x = nb;
	contador = 0;
	if (x <= 0)
		return (0);
	while (contador * contador < x && x <= 2147395600)
	{
		contador++;
	}
	if (contador * contador == x)
		return (contador);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(-1862));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("x: %d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(1640045925));
	printf("x1: %d\n", ft_sqrt(2147483646));
	printf("%d\n", ft_sqrt(142157929));
	printf("%d\n", ft_sqrt(454465476));
	printf("%d\n", ft_sqrt(152004241));
	printf("x2: %d\n", ft_sqrt(2147483647));
}
*/
