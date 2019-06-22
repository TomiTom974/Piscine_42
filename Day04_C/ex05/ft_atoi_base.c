/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 19:04:44 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/17 19:18:48 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
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
	if (str[0] == '\0')
		same++;
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

int		ft_atoi_base(char *str, char *base)
{
	int	s;
	int	i;
	int	res;
	int	neg;
	int	len;

	if (ft_check_same(base) != 0)
		return (0);
	len = 0;
	while (base[len])
		++len;
	s = 0;
	while (str[s] != '\0' && (str[s] == ' ' || str[s] == '\t' || str[s] == '\r'
				|| str[s] == '\n' || str[s] == '\v' || str[s] == '\f'))
		s++;
	i = s - 1;
	res = 0;
	neg = 1;
	while (str[++i] && (((str[i] == '-' || str[i] == '+') && i == s) ||
				(str[i] != '-' && str[i] != '+')))
		if (str[i] == '-')
			neg = -1;
		else if (str[i] != '+')
			res = (res * len) + (ft_get_nb(str[i], base));
	return (res * neg);
}
