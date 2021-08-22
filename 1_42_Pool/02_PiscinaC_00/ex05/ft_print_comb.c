/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:39:17 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/13 18:39:22 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0' - 1;
	while (n1++ < '7')
	{
		n2 = n1;
		while (n2++ < '8')
		{
			n3 = n2;
			while (n3++ < '9')
			{
				if (!(n1 == '0' && n2 == '1' & n3 == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(n1);
				ft_putchar(n2);
				ft_putchar(n3);
			}
		}
	}
}
/*
int main (void)
{
	ft_print_numbers();
}
*/
