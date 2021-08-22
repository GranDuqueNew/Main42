/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:56:25 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/21 20:47:29 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	char	*StrTem;
	int		nombre;
	int		signo;

	StrTem = str;
	nombre = 0;
	signo = 1;
	while (*StrTem == ' ' || (*StrTem >= 9 && *StrTem <= 13))
		StrTem++;
	while (*StrTem == '-' || *StrTem == '+')
	{
		if (*StrTem == '-')
			signo *= -1;
		StrTem++;
	}
	while (*StrTem >= '0' && *StrTem <= '9')
	{
		nombre *= 10;
		nombre += (int)(*StrTem - '0');
		StrTem++;
	}
	return (nombre * signo);
}
/*
int main(void)
{
	char *s = " ---+--+1234ab567";
	char *a = " -1234ab567";
	printf("%d %d", ft_atoi(s), atoi(a));
	return (0);
}
*/
