/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:29:14 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	size_t	cnt;
	char	*strTem;

	strTem = (char *)str;
	cnt = ft_strlen(str);
	if (chr == '\0')
		return (strTem + cnt);
	while (cnt != 0)
	{
		if (strTem[cnt] == (char)chr)
			return (strTem + cnt);
		cnt--;
	}
	if (str[0] == (char)chr)
		return (strTem);
	return (0);
}
/*
int main()
{
	// La función char *ft_strrchr(const char *s, int c):
	// Localiza la última aparición de chr en la cadena apuntada por str.
	// El carácter nulo de terminación se considera parte de la cadena, 
	// por lo tanto, si chr es '\0', ubica la terminación '\0'

	const char str[] = "JoseAndres.DuquePantoja";
	char ch = '\0';
	char *sal1;
	char *sal2;

	printf("**********PROPIA**********\n");
	printf("Entrada: %s\n", str);
	sal1 = ft_strrchr(str, ch);
	printf("Salida: %s\n", sal1);

	printf("**********ORIGINAL**********\n");
	printf("Entrada: %s\n", str);
	sal2 = strrchr(str, ch);
	printf("Salida: %s\n", sal2);

	return (0);
}
*/
