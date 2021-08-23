/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:55:47 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:19:34 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	GetPalabras(const char *str, char c)
{
	int	cnt;
	int	put;

	cnt = 0;
	put = 0;
	while (*str)
	{
		if (*str != c && put == 0)
		{
			put = 1;
			cnt++;
		}
		else if (*str == c)
			put = 0;
		str++;
	}
	return (cnt);
}

static char	*putPalabra(const char *str, int start, int end)
{
	char	*chr;
	int		cnt;

	cnt = 0;
	chr = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		chr[cnt++] = str[start++];
	chr[cnt] = '\0';
	return (chr);
}

char	**ft_split(char const *s, char c)
{
	size_t	cnt1;
	size_t	cnt2;
	int		index;
	char	**split;

	split = malloc((GetPalabras(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	cnt1 = 0;
	cnt2 = 0;
	index = -1;
	while (cnt1 <= ft_strlen(s))
	{
		if (s[cnt1] != c && index < 0)
			index = cnt1;
		else if ((s[cnt1] == c || cnt1 == ft_strlen(s)) && index >= 0)
		{
			split[cnt2++] = putPalabra(s, index, cnt1);
			index = -1;
		}
		cnt1++;
	}
	split[cnt2] = 0;
	return (split);
}
/*
int main()
{
	//char **ft_split(char const *s, char c)
	// Reserva con malloc(3) y devuelve un array de
	// strings obtenido al separar ’s’ con el caracter ’c’
	// como delimitador. El array debe terminar en NULL.
}
*/