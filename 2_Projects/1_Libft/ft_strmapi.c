/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:21:18 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:25:34 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strTem;
	int		len;
	int		cnt;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	strTem = (char *)malloc(sizeof(char) * (len + 1));
	if (!strTem)
		return (NULL);
	cnt = 0;
	while (s[cnt] != '\0')
	{
		strTem[cnt] = f(cnt, s[cnt]);
		cnt++;
	}
	strTem[cnt] = '\0';
	return (strTem);
}
/*
int main()
{
	// char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
	// Aplica la función ’f’ a cada caracter de la string
	// ’s’ para crear la nueva string, resultado de
	// aplicar sucesivas veces ’f’ (utilizando malloc(3)).
}
*/