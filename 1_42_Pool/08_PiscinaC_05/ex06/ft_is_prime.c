/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:07:21 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/25 12:17:17 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_is_prime(int nb)
{
	int	contador;

	contador = 2;
	if (nb <= 1)
		return (0);
	while (contador <= nb / contador)
	{
		if (nb % contador == 0)
			return (0);
		contador++;
	}
	return (1);
}
/*
int	main(void)
{
//	2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(-2147483647));
}
*/
