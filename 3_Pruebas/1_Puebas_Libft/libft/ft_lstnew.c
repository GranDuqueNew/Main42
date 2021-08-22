/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:36:49 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 15:41:15 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newElement;

    if (!(newElement = malloc(sizeof(t_list))))
        return (NULL);
    newElement->content = content;
    newElement->next = NULL;
    return (newElement);
}
/*
int main()
{
    // t_list *ft_lstnew(void *content):
    // Reserva con malloc(3) y devuelve un elemento nuevo.
    // La variable ’content’ se inicializa con el valor
    // del parámetro ’content’. La variable ’next’ se
    // inicializa a NULL.
}
*/