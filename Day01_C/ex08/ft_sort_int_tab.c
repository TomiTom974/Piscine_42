/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 20:29:54 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/07 03:20:46 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int in;
	int trans;

	in = 1;
	count = 0;
	while (in != 0)
	{
		in = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				trans = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = trans;
				in++;
			}
			count++;
		}
	}
}
