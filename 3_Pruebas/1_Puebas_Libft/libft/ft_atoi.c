/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:05:44 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				cnt;
	int				sgn;

	num = 0;
	cnt = 0;
	sgn = 1;
	while (str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\f'
		|| str[cnt] == '\r' || str[cnt] == '\n' || str[cnt] == '\v')
		cnt++;
	if (str[cnt] == '+' || str[cnt] == '-')
		if (str[cnt++] == '-')
			sgn = -1;
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		num = num * 10 + (str[cnt] - '0');
		cnt++;
	}
	return ((int)(sgn * num));
}
/*
int main()
{
    //  La función int ft_atoi(const char *str):
    //  Convierte una cadena en un numero entero.
}
*/
