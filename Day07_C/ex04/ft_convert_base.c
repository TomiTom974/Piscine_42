/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 18:56:55 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/21 01:08:52 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_aff(int nb, char *str, char *result, int index);

int		ft_lennb(int number, char *base)
{
	int	len1;
	int	len;

	len = 0;
	while (base[len])
		len++;
	len1 = 0;
	if (len == 0)
		return (0);
	while (number >= len)
	{
		++len1;
		number /= len;
	}
	return (++len1);
}

int		get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int	s;
	int	i;
	int	res;
	int	negative;
	int	len;

	len = 0;
	while (base[len])
		++len;
	s = 0;
	while (str[s] != '\0' && (str[s] == ' ' || str[s] == '\t' || str[s] == '\r'
				|| str[s] == '\n' || str[s] == '\v' || str[s] == '\f'))
		s++;
	i = s - 1;
	res = 0;
	negative = 1;
	while (str[++i] && (((str[i] == '-' || str[i] == '+') && i == s) ||
				(str[i] != '-' && str[i] != '+')))
		if (str[i] == '-')
			negative = -1;
		else if (str[i] != '+')
			res = (res * len) + (get_nb(str[i], base));
	return (res * negative);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*result;
	int				nb;
	int				last;

	if (base_to[0] == '\0')
		return (0);
	if (!nbr || !base_from || !base_to)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	result = (char *)malloc(sizeof(char) * ft_lennb(nb, base_to));
	last = ft_aff(nb, base_to, result,
			ft_lennb(nb, base_to) - 1);
	result[last + 1] = '\0';
	return (result);
}
