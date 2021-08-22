/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:56:28 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/28 16:46:15 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void	printseparador(char **concatptr, char *sep)
{
	while (*sep)
	{
		**concatptr = *sep;
		sep++;
		*concatptr += 1;
	}
}

void	concatenar(int size, char *concatptr, char **strs, char *sep)
{
	int	numero;
	int	contador;

	numero = 0;
	while (numero < size)
	{
		contador = 0;
		while (strs[numero][contador])
		{
			*concatptr = strs[numero][contador];
			concatptr++;
			contador++;
		}
		if (numero == size - 1)
			*concatptr = 0;
		else if (*sep)
			printseparador(&concatptr, sep);
		numero++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	char	*concatptr;
	int		numero;

	if (size)
	{
		numero = (strs[size - 1] - *strs) + ft_strlen(strs[size - 1]) + 1;
		concat = (char *)malloc(numero + ((ft_strlen(sep) - 1) * (size - 1)));
	}
	else
	{
		concat = malloc(1);
		*concat = 0;
		return (concat);
	}
	concatptr = concat;
	concatenar(size, concatptr, strs, sep);
	return (concat);
}

int main()
{
	char *cadendas[6];
	cadendas[0] = "Jose";
	cadendas[1] = "Andres";
	cadendas[2] = "Manolo";
	cadendas[3] = "";
	cadendas[4] = "MariPili";
	cadendas[5] = "Manoli";
	printf("%s\n", ft_strjoin(6, cadendas, "*"));
	return (0);
}

