/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:39:30 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 18:59:13 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
int	main()
{
//	Factorial de manera recursiva
//	factorial (4) = 4 * factorial(3)(1x2x3)--> return(4*6)
//	factorial (3) = 3 * factorial(2)(1x2)--> return(3*2)
//	factorial (2) = 2 * factorial(1)(1)--> return(2*1)
//	factorial (1) = 1 ---------------> return 1

	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(4));
}
*/
