/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:26:00 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/21 20:39:30 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putnbr(int numero)
{
	unsigned int	numero_unsigned;

	if (numero < 0)
	{
		numero_unsigned = (unsigned int)(-1 * numero);
		ft_putchar('-');
	}
	else
		numero_unsigned = (unsigned int)numero;
	if (numero_unsigned >= 10)
	{
		ft_putnbr(numero_unsigned / 10);
		ft_putnbr(numero_unsigned % 10);
	}
	else
		ft_putchar(numero_unsigned + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
    printf("Positivo:\n");
	ft_putnbr(42);
	printf("\n");
	printf("Negativo:\n");
	ft_putnbr(-42);
}

