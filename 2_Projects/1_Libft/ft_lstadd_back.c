/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:48:39 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/22 18:51:58 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *lstTem;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		lstTem = *lst;
		while (lstTem->next != NULL)
			lstTem = lstTem->next;
		lstTem->next = new;
		new->next = NULL;
	}

}
/*
int main()
{
	// void ft_lstadd_back(t_list **lst, t_list *new):
	// Añade el elemento ’new’ al final de una lista.
}
*/