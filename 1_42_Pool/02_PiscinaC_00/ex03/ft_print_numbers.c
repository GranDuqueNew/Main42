/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:37:59 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/13 18:38:04 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numero;

	numero = 48;
	while (numero <= 57)
	{
		write(1, &numero, 1);
		numero++;
	}
}
/*
int main (void)
{
	ft_print_numbers();
}
*/
