/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:44:46 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/17 18:25:49 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resto;

	resto = *a % *b;
	*a = *a / *b;
	*b = resto;
}
/*
int main()
{
	int a;
	int b;
	a = 10;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
}
*/
