/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 04:06:24 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/09 00:16:16 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] < 32 || str[count] > 126)
			return (0);
		count++;
	}
	return (1);
}
