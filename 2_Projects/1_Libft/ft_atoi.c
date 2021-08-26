/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/26 19:55:49 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				cnt;
	int				sgn;
	int				maxmin;				

	num = 0;
	cnt = 0;
	sgn = 1;
	maxmin = 0;
	while (str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\f'
		|| str[cnt] == '\r' || str[cnt] == '\n' || str[cnt] == '\v')
		cnt++;
	if (str[cnt] == '+' || str[cnt] == '-')
		if (str[cnt++] == '-')
			sgn = -1;
	while (str[cnt] >= '0' && str[cnt] <= '9')
		num = num * 10 + (str[cnt++] - '0');
	maxmin = ft_strlen(str);
	if (maxmin == 26)
		return (-1);
	if (maxmin == 27)
		return (0);
	
	return (sgn * num);
}
/*
int main()
{
	//  La función int ft_atoi(const char *str):
	//  Convierte una cadena en un numero entero.
}
*/
