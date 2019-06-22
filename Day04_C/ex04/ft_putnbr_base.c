/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 23:40:51 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/10 09:58:33 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_same(char *str)
{
	int i;
	int j;
	int same;

	i = 0;
	same = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == '+' || str[i] == '-')
			same++;
		while (str[j])
		{
			if (i != j && str[i] == str[j])
				same++;
			j++;
		}
		i++;
	}
	return (same);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int eressante;

	eressante = ft_strlen(base);
	if (ft_strlen(base) > 1 && ft_check_same(base) == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		if (nbr > eressante)
		{
			ft_putnbr_base(nbr / eressante, base);
		}
		ft_putchar(base[nbr % eressante]);
	}
}
