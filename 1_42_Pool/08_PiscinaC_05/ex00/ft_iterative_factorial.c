/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:39:30 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 20:34:39 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
/*
int	main()
{

//	Cantidad que resulta de la multiplicación de determinado número natural
//	por todos los números naturales que le anteceden excluyendo el cero; se
/	representa por n!


	printf("%d\n", ft_iterative_factorial(0));

	printf("%d\n", ft_iterative_factorial(10));
}
*/
