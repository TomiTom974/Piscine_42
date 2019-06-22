/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 21:41:34 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/09 00:39:12 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	unsigned int i;

	i = 0;
	count = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[count] && count < n)
	{
		dest[count + i] = src[count];
		count++;
	}
	dest[count + i] = '\0';
	count = 0;
	while (src[count])
		count++;
	return (count);
}
