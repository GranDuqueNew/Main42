/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:56:25 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/21 20:25:57 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
int	main(void)
{
	char	*str;

	str = "Jose Andres Duque";
	ft_putstr(str);
}
*/
