/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:39:30 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 18:00:44 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_iterative_power(int nb, int power)
{
	int	NumTem;

	NumTem = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		NumTem *= nb;
		power--;
	}
	return (NumTem);
}

/*
int main(void)
{
	//Numero a potenciar y su indice
	printf("%d\n", ft_iterative_power(2, 3));
}
*/
