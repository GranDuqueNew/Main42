/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:07:21 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 19:26:02 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int main(void)
{

//	serie de Fibonacci es la siguiente sucesión infinita de números naturales:
//	0,1,1,2,3,5,8,13,21,34,(55),89,144,233,377,610,987,1597
//	Fiboacci: 5->(5) + 4->(3) = 8
//	Fiboacci: 4->(3) + 3->(2) = 5
//	Fiboacci: 3->(2) + 2->(1) = 3
//	Fiboacci: 2->(1) + 1->(1) = 2
//	Fiboacci: return 1

	printf("%d\n", ft_fibonacci(6));
}
*/
