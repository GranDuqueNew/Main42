/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:08:53 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/17 16:20:20 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str != 0)
	{
		contador++;
		str++;
	}
	return (contador);
}
/*
int	main(void)
{
	char	*cadena;

	cadena = "Hola mundo";
	printf("Contador %d", ft_strlen(cadena));
}
*/
