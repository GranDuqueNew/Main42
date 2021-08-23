/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:05:48 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:39:26 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strTem;
	size_t	cnt;
	size_t	strLen;

	cnt = 0;
	strLen = 0;
	if (s == NULL)
		return (NULL);
	strLen = ft_strlen(s);
	if (strLen < start)
		return (ft_strdup(""));
	if (start + len > strLen)
		len = strLen - start;
	strTem = (char *)malloc(sizeof(char) * (len + 1));
	if (strTem == 0)
		return (NULL);
	while (cnt < len && start + cnt < strLen)
	{
		strTem[cnt] = s[start + cnt];
		cnt++;
	}
	strTem[cnt] = '\0';
	return (strTem);
}
/*
int main()
{
	// char *ft_substr(char const *s, unsigned int start, size_t len)
	// Reserva con malloc(3) memoria para devolver una
	// strTeming nueva basada en la strTeming ’s’.
	// La nueva strTeming empieza en el índice ’start’ y
	// tiene una longitud máxima ’len’.
}
*/