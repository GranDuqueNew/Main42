/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:58:23 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/17 15:58:25 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*strTem;

	strTem = str;
	while (*strTem != 0)
	{
		write(1, strTem, 1);
		strTem++;
	}
}
/*
int main()
{
	char *cadena;
	cadena = "Hola mundo";
	ft_putstr(cadena);
}
*/
