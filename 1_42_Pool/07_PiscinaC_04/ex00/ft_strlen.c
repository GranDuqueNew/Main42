/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:56:25 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/21 20:26:52 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	char	*Strtem;
	int		Contador;

	Strtem = str;
	Contador = 0;
	while (*Strtem != 0)
	{
		Contador++;
		Strtem++;
	}
	return (Contador);
}
/*
int main()
{
	//Contador cadena
	char Cadena1[] = "Jose Duque";
	printf("%d\n", ft_strlen(Cadena1));
	printf("%lu\n", strlen(Cadena1));
	return (0);
}
*/
