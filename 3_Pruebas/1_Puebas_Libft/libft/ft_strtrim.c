/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:49:05 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 16:58:01 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *strTem;
	size_t start;
	size_t end;

	strTem = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		strTem = (char *)malloc(sizeof(char) * (end - start + 1));
		if (strTem)
			ft_strlcpy(strTem, &s1[start], end - start + 1);
	}
	return (strTem);
}
/*
int main()
{
	// char *ft_strtrim(char const *s1, char const *set);
	// Reserva con malloc(3) y devuelve una copia de ’s1’
	// con los caracteres dados en ’set’ eliminados tanto
	// del principio como del final.
}
*/