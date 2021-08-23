/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:54:20 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:15:00 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int main()
{
	// void ft_lstiter(t_list *lst, void (*f)(void *));
	// Itera la lista ’lst’ y aplica la función ’f’ al
	// contenido de cada elemento.
}
*/