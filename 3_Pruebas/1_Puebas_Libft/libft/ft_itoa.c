/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:16:04 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:14:01 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	GetLengthInt(int num)
{
	int	len;

	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

int	GetSgnNum(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}

char	*ft_itoa(int n)
{
	char	*strTem;
	int		len;
	int		sgn;

	len = GetLengthInt(n);
	strTem = (char *)malloc(sizeof(char) * (len + 1));
	if (!strTem)
		return (NULL);
	strTem[len] = '\0';
	len--;
	if (n < 0)
		sgn = -1;
	else
		sgn = 1;
	while (len >= 0)
	{
		strTem[len] = GetSgnNum(n % 10) + '0';
		n = GetSgnNum(n / 10);
		len--;
	}
	if (sgn == -1)
		strTem[0] = '-';
	return (strTem);
}
/*
int main()
{
	// char *ft_itoa(int n)
	// Reserva con malloc(3) y devuelve una string que
	// representa el número dado como argumento. Los
	// números negativos deben gestionarse correctamente.
}
*/