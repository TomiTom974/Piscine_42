/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 04:29:00 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/09 00:18:30 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int count;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	count = 1;
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] = str[count] + 32;
		}
		if (str[count] <= 122 && str[count] >= 97)
		{
			if (str[count - 1] < 'a' || str[count - 1] > 'z')
			{
				if (str[count - 1] > 'Z' || str[count - 1] < 'A')
				{
					if (str[count - 1] < '0' || str[count - 1] > '9')
						str[count] = str[count] - 32;
				}
			}
		}
		count++;
	}
	return (str);
}
