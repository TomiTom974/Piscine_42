/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 04:12:11 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/08 17:58:34 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 65 && str[count] <= 90)
			str[count] = str[count] + 32;
		count++;
	}
	return (str);
}
