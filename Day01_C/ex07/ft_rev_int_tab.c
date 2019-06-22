/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 20:16:08 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/13 20:55:14 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int mid;
	int trans;
	int count;

	count = 0;
	while (count <= size / 2)
	{
		trans = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = trans;
		count++;
	}
}
