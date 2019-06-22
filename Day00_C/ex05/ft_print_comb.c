/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 01:20:49 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/05 22:54:39 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchaine(char a, char b, char c);

void	ft_print_comb(void)
{
	char n;
	char m;
	char o;

	n = '0';
	while (n <= '7')
	{
		m = n + 1;
		while (m <= '8')
		{
			o = m + 1;
			while (o <= '9')
			{
				ft_putchaine(n, m, o);
				if (n != '7' || m != '8' || o != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				o++;
			}
			m++;
		}
		n++;
	}
}

void	ft_putchaine(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}
