/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:47:12 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/18 18:13:10 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		okey;

	i = 0;
	okey = 1;
	if (str[i] < 0)
		okey = 1;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			okey = 0;
			break ;
		}
		i++;
	}
	return (okey);
}
/*
int main(void)
{
	char cadena_1[] = "AAAAADFDFDFDFD";
	char cadena_2[] = "asddAAgfgf";
	char cadena_3[] = "AAaa";
	char cadena_4[] = "0lEtRAs1";
	char cadena_5[] = "";

	printf("cadena_1: %d\n", ft_str_is_uppercase(cadena_1));
	printf("cadena_2: %d\n", ft_str_is_uppercase(cadena_2));
	printf("cadena_3: %d\n", ft_str_is_uppercase(cadena_3));
	printf("cadena_4: %d\n", ft_str_is_uppercase(cadena_4));
	printf("cadena_5: %d\n", ft_str_is_uppercase(cadena_5));
	return (0);
}
*/
