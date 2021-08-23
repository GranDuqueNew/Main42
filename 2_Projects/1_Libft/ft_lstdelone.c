/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:49:59 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:14:49 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}
/*
int main()
{
	// void ft_lstdelone(t_list *lst, void (*del)(void *)):
	// Toma como parámetro un elemento y libera la memoria
	// del contenido del elemento utilizando la función
	// ’del’ dada como parámetro, por último libera el
	// elemento. La memoria de ’next’ no debe liberarse.
}
*/