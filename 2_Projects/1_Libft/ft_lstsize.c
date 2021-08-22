/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:43:27 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 18:53:15 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *lstTem;
    int cnt;

    lstTem = lst;
    cnt = 0;
    while (lstTem)
    {
        lstTem = lstTem->next;
        cnt++;
    }
    return (cnt);
}
/*
int main()
{
    // int ft_lstsize(t_list *lst):
    // Cuenta el número de elemento de una lista.
}
*/