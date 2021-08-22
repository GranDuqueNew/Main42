/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:56:28 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/26 20:58:25 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strdup(char *src)
{
	char	*memoria;
	int		i;

	i = 0;
	memoria = malloc(ft_strlen(src) + 1);
	if (!(memoria))
		return (memoria);
	while (src[i])
	{
		memoria[i] = src[i];
		i++;
	}
	memoria[i] = 0;
	return (memoria);
}
/*
int main(void)
{
	//Memoria dinamica.
	printf("%s\n", ft_strdup("Jose Andres Duque"));
	return (0);
}
*/
