/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 08:52:43 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/10 14:18:25 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int tot;

	i = 0;
	neg = 1;
	tot = 0;
	while (str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' ||
			str[i] == ' ' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		tot = tot * 10;
		tot = tot + (str[i] - '0');
		i++;
	}
	return (tot * neg);
}
