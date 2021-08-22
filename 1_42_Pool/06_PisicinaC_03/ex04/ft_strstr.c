/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:42:40 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/20 20:56:01 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	Contaor_1;
	int	Contaor_2;

	Contaor_1 = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*(str + Contaor_1))
	{
		Contaor_2 = 0;
		while (to_find[Contaor_2] == str[Contaor_1 + Contaor_2])
		{
			if (to_find[Contaor_2 + 1] == '\0')
				return (str + Contaor_1);
			Contaor_2++;
		}
		Contaor_1++;
	}
	return (0);
}
/*
int main()
{
	//Busqueda de subcadena en cadena y devuelve resto
	char string[40] = "Jose Andres Duqu Pantoja";
	char string2[] = "Duque";
	printf("%s\n", ft_strstr(string, string2));
	printf("%s\n", strstr(string, string2));
	return (0);
}
*/
