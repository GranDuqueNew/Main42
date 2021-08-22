/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:46:01 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 14:46:05 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int cnt1;
    int cnt2;

    if (!s1 || !s2)
        return (NULL);
    cnt1 = ft_strlen(s1);
    cnt2 = ft_strlen(s2);
    if (!(str = (char *)malloc(sizeof(char) * (cnt1 + cnt2 + 1))))
        return (NULL);
    ft_memcpy(str, s1, cnt1);
    ft_memcpy(str + cnt1, s2, cnt2);
    str[cnt1 + cnt2] = '\0';
    return (str);
}
/*
int main()
{
    // char *ft_strjoin(char const *s1, char const *s2):
    // Reserva con malloc(3) una nueva string, basada en
    // la unión de las dos strings dadas como parámetros.
}
*/