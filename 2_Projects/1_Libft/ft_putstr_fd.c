/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:26:15 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 15:27:41 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int cnt;

    cnt = 0;
    if (s)
    {
        while (s[cnt])
        {
            write(fd, &s[cnt++], 1);
        }
    }
}
/*
int main()
{
    // void ft_putstr_fd(char *s, int fd):
    // Escribe la string ’s’ en el file descriptor indicado.
}
*/