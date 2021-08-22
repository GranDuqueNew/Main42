/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:07:21 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/28 17:52:48 by jduque-p         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	long int	contador;
	long int	x;

	x = nb;
	if (x < 2)
		x = 2;
	contador = x;
	while (contador < 2 * x)
	{
		if (ft_is_prime(contador))
			return (contador);
		contador++;
	}
	return (0);
}

int main(void)
{
	//	2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61

	printf("%d\n", ft_find_next_prime(-2147483645));
	printf("%d\n", ft_find_next_prime(5));
}

