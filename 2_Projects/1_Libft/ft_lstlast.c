/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:45:47 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 15:45:52 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (lst);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}
/*
int main()
{
    // t_list *ft_lstlast(t_list *lst):
    // Devuelve el último elemento de una lista.
}
*/