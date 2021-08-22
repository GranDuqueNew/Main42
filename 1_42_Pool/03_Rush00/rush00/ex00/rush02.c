/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:15:13 by aguerrer          #+#    #+#             */
/*   Updated: 2021/04/11 14:15:41 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	aux(int x, int y, int i, int j);

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
			aux(x, y, i, j);
			j++;
		}
		i++;
		ft_putchar('\n');
		j = 0;
	}
}

void	aux(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i == 0 && j == x - 1))
		ft_putchar('A');
	else if (j == 0 && i == y - 1)
		ft_putchar('C');
	else if (i == y - 1 && j == x - 1)
		ft_putchar('C');
	else if (i == 0 || i == y - 1)
		ft_putchar('B');
	else if (j == 0 || j == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
