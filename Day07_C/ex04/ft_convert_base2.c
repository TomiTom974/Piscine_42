/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 18:57:42 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/22 14:02:59 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_aff(int nb, char *str, char *result, int index)
{
	unsigned int	n;
	unsigned int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	if (nb < 0)
	{
		result[index++] = '-';
		n = nb * -1;
	}
	else
		n = nb;
	if (n >= len && len != 0)
		ft_aff(n / len, str, result, index - 1);
	if (len != 0)
		result[index] = str[n % len];
	return (index);
}
