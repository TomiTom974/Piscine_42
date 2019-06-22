/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 07:44:30 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/12 03:58:45 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int tot;

	i = 1;
	tot = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		tot = tot * i;
		i++;
	}
	return (tot);
}
