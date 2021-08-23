/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:20:27 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	  char	*strTem;
	size_t	len;
	size_t	cnt2;

	len = ft_strlen(str);
	strTem = (char *)malloc(sizeof(const char) * (len + 1));
	if (!strTem)
		return (NULL);
	cnt2 = 0;
	while (str[cnt2])
	{
		strTem[cnt2] = str[cnt2];
		cnt2++;
	}
	strTem[cnt2] = '\0';
	return (strTem);
}
/*
int main()
{
	// La función ft_strdup(const char *str);
	// Cadena duplicada str. La memoria para la nueva cadena se obtiene con malloc
	// y se puede liberar con free

	printf("%s\n", ft_strdup("Hello world!"));

	return (0);
}
*/