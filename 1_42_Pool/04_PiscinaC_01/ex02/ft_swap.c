/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:09:30 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/17 15:09:33 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
/*
int main ()
{
	int a;
	int b;

	a=5;
	b=8;

	printf("Valor a %d\n",a);
	printf("Valor b %d\n",b);

	ft_swap(&al,&bl);

	printf("Valor a %d\n",a);
	printf("Valor b %d\n",b);
}

*/
