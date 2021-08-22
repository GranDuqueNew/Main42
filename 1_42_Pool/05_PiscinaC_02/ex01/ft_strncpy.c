/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:55:22 by jduque-p          #+#    #+#             */
/*   Updated: 2021/06/02 17:16:27 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int ContadorPositivo;

	ContadorPositivo = 0;
	while (ContadorPositivo < n && src[ContadorPositivo])
	{
		dest[ContadorPositivo] = src[ContadorPositivo];
		ContadorPositivo++;
	}
	while (ContadorPositivo < n)
	{
		dest[ContadorPositivo] = 0;
		ContadorPositivo++;
	}
	return (dest);
}

int main()
{
	char cadena1[] = "Jose";
	char cadena2[] = "Anders";

	printf("%s\n", cadena1);
	ft_strncpy(cadena1, cadena2, 10);
	printf("%s\n", cadena1);
	return (0);
}
