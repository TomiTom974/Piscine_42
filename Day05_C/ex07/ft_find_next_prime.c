/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:09:13 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/12 06:28:38 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	if (nb == 0 || nb == 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (1 == 1)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb + i);
		i++;
	}
}
