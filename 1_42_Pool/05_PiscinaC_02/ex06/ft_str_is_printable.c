/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:47:12 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/20 19:33:20 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char cadena_1[] = "¿";
	char cadena_2[] = "asd f1234~";
	char cadena_3[] = "31";
	char cadena_4[] = "127";
	char cadena_5[] = " ";

	printf("cadena_1: %d\n", ft_str_is_printable(cadena_1));
	printf("cadena_2: %d\n", ft_str_is_printable(cadena_2));
	printf("cadena_3: %d\n", ft_str_is_printable(cadena_3));
	printf("cadena_4: %d\n", ft_str_is_printable(cadena_4));
	printf("cadena_5: %d\n", ft_str_is_printable(cadena_5));
	return (0);
}
*/
