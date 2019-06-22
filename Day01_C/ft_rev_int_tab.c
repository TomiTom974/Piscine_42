/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 20:16:08 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/13 21:04:02 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int trans;
	int count;

	count = 0;
	while (++count <= size / 2)
	{
		trans = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = trans;
	}
}

int		main(void)
{
	int *bon = "1, 2, 3, 4, 5, 6, 7, 8, 9";

	printf("%d\n", bon);
	ft_rev_int_tab(bon, 9);
	printf("%d", bon);
}
