/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:39:30 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 19:09:27 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
int main(void)
{
//	Numero a potenciar y su indice de manera recursiva
//	potencia(4) = 2 * 2 potencia(3)--> return(16)
//	potencia(3) = 2 * 2 potencia(2)--> return(8)
//	potencia(2) = 2 * 2 potencia(1)--> return(4)
//	potencia(1) = 1 ---------------> return 1

	printf("%d\n", ft_recursive_power(2, 4));
}
*/
