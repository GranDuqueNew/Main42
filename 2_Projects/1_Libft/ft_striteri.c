/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:22:52 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 15:23:53 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int cnt;

	if (!s || !f)
		return;
	cnt = 0;
	while (s[cnt])
	{
		f(cnt, s + cnt);
		cnt++;
	}
}
/*
int main()
{
	// void ft_striteri(char *s, void (*f)(unsigned int, char *))
	// Aplica la función ’f’ a cada caracter de la string
	// dada como argumento, pasando su índice como primer
	// argumento. Cada caracter se pasa como una dirección
	// a ’f’, por si hace falta modificarlo.
}
*/