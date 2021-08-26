/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:48:39 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/26 23:19:33 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
			(ft_lstlast(*lst))->next = new;
	}
}
/*
int main()
{
	// void ft_lstadd_back(t_list **lst, t_list *new):
	// Añade el elemento ’new’ al final de una lista.
}
*/