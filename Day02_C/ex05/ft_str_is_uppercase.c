/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 04:02:39 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/08 17:37:02 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] < 65 || str[count] > 90)
			return (0);
		count++;
	}
	return (1);
}
