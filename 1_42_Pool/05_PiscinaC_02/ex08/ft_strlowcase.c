/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:47:12 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/18 19:22:06 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*TempStr;

	TempStr = str;
	while (*TempStr != 0)
	{
		if (*TempStr >= 'A' && *TempStr <= 'Z')
		{
			*TempStr += 32;
		}
		TempStr++;
	}
	return (str);
}
/*
int main(void)
{
	char cadena_1[] = "AasdfDFDFssd";

	printf("cadena_1: %s\n", ft_strlowcase(cadena_1));

	return (0);
}
*/
