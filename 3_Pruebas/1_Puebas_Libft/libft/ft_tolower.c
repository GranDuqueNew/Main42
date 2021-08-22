/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/09 19:27:13 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		return (chr + 'a' - 'A');
	return (chr);
}