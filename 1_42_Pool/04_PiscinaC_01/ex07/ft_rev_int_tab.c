/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:30:39 by jduque-p          #+#    #+#             */
/*   Updated: 2021/04/17 17:59:03 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	contador;
	int	temp;

	contador = 0;
	while (contador < size)
	{
		temp = tab[contador];
		tab[contador] = tab[size - 1];
		tab[size - 1] = temp;
		contador++;
		size--;
	}
}
/*
int main() {

    int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    ft_rev_int_tab(tab, 9);

    for (int i = 0; i < 9; i++)
	{
        printf("%d ", tab[i]);
    }
}
*/
