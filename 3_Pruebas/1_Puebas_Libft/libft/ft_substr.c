/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:05:48 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 17:17:47 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *strTem;
	size_t cnt1;
	size_t cnt2;

	strTem = (char *)malloc(sizeof(*s) * (len + 1));
	if (!strTem)
		return (NULL);
	cnt1 = 0;
	cnt2 = 0;
	while (s[cnt1])
	{
		if (cnt1 >= start && cnt2 < len)
		{
			strTem[cnt2] = s[cnt1];
			cnt2++;
		}
		cnt1++;
	}
	strTem[cnt2] = 0;
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