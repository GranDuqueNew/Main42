/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:19:03 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/21 19:46:00 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

int main()
{
	//Comparacion de cadenas  por caracteres determinado
	char str1[] = "Jose";
	char str2[] = "Jose A";
	printf("%u\n", ft_strncmp(str1, str2, 4));
	printf("%u\n", ft_strncmp(str1, str2, 5));
	printf("%u\n", strncmp(str1, str2, 4));
	printf("%u\n", strncmp(str1, str2, 5));
	return (0);
}

