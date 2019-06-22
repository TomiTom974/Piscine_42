/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 03:59:11 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/08 17:36:50 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] < 97 || str[count] > 122)
			return (0);
		count++;
	}
	return (1);
}
