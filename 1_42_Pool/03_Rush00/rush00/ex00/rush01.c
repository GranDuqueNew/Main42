/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:14:46 by aguerrer          #+#    #+#             */
/*   Updated: 2021/04/11 14:14:59 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if (i == 0 && j == 0)
				ft_putchar('/');
			else if ((i == 0 && j == x - 1) || (j == 0 && i == y - 1))
				ft_putchar('\\');
			else if (i == y - 1 && j == x - 1)
				ft_putchar('/');
			else if (i == 0 || j == 0 || i == y - 1 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
		j = 0;
	}
}
