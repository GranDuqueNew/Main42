/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:57:10 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 16:35:11 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str)
{
	char	*strTem;

	strTem = str;
	while (*strTem != 0)
	{
		write(1, strTem, 1);
		strTem++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_argc(char *argv[], int size)
{
	int		contador_1;
	int		contador_2;
	char	*Strtemp;

	contador_1 = 1;
	while (contador_1 < size)
	{
		contador_2 = contador_1 + 1;
		while (contador_2 < size)
		{
			if (ft_strcmp(argv[contador_2], argv[contador_1]) < 0)
			{
				Strtemp = argv[contador_1];
				argv[contador_1] = argv[contador_2];
				argv[contador_2] = Strtemp;
			}
			contador_2++;
		}
		contador_1++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_argc(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
