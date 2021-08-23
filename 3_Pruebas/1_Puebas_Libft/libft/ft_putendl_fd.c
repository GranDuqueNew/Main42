/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:28:14 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:18:15 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	line = '\n';

	write(fd, s, ft_strlen(s));
	write(fd, &line, 1);
}
/*
int main()
{
	// void ft_putendl_fd(char *s, int fd)
	// Escribe la string ’s’ en el file descriptor
	// indicado, seguido de un salto de línea.
}
*/