/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:24:34 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/24 12:29:22 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		contador;
	int		control;
	char	c;

	contador = 0;
	control = 1;
	while (*(str + contador) != '\0')
	{
		c = *(str + contador);
		if (control == 1 && c >= 'a' && c <= 'z')
			str[contador] -= 32;
		else if (control == 0 && c >= 'A' && c <= 'Z')
			str[contador] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			control = 1;
		else
			control = 0;
		contador++;
	}
	return (str);
}

int main()
{
	char cadena[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(cadena);

	printf("cadena_1: %s\n", ft_strcapitalize(cadena));
}

