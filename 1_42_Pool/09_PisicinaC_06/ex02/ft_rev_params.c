/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:46:39 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 15:53:41 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str)
{
	char	*StrTem;
	int		contador;

	contador = 0;
	StrTem = str;
	while (StrTem[contador] != 0)
	{
		write(1, &StrTem[contador++], 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	contador;

	contador = argc - 1;
	while (contador > 0)
	{
		ft_putstr(argv[contador]);
		contador--;
	}
	return (0);
}
