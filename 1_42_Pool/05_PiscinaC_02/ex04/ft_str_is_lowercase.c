/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:47:12 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/18 18:09:28 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		okey;

	i = 0;
	okey = 1;
	if (str[i] < 0)
		okey = 1;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char cadena_1[] = "Agfhfgh12gfhfg";
	char cadena_2[] = "asddfdgfgf";
	char cadena_3[] = "AAaa";
	char cadena_4[] = "0lEtRAs1";
	char cadena_5[] = "";

	printf("cadena_1: %d\n", ft_str_is_lowercase(cadena_1));
	printf("cadena_2: %d\n", ft_str_is_lowercase(cadena_2));
	printf("cadena_3: %d\n", ft_str_is_lowercase(cadena_3));
	printf("cadena_4: %d\n", ft_str_is_lowercase(cadena_4));
	printf("cadena_5: %d\n", ft_str_is_lowercase(cadena_5));
	return (0);
}
*/
