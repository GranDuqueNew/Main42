/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:53:25 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 18:52:39 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tem;
    t_list *lstTem;

    lstTem = *lst;
    while (lstTem)
    {
        tem = lstTem->next;
        if (del)
        {
            del(lstTem->content);
        }
        free(lstTem);
        lstTem = tem;
    }
    *lst = NULL;
}
/*
int main()
{
    // void ft_lstclear(t_list **lst, void (*del)(void *)):
    // Elimina y libera cada uno de los elementos de la
    // lista dada, utilizando la función ’del’ y free(3).
    // Por último, el puntero a la lista debe ponerse a NULL.
}
*/