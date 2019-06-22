/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:18:12 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/19 21:20:31 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int		is_str(char c, char s, char *charset)
{
	return (!is_charset(c, charset) && is_charset(s, charset));
}

int		words_count(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_str(str[i], str[i - 1], charset) ||
				(!is_charset(str[i], charset) && i == 0))
			count++;
		i++;
	}
	return (count);
}

int		*strs_len(char *str, char *charset)
{
	int	index;
	int	i;
	int	count;
	int	*size;

	i = 0;
	count = words_count(str, charset);
	size = malloc(count * sizeof(int));
	while (i <= count)
	{
		size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (!is_charset(str[i], charset))
			size[index]++;
		else if (i > 0 && !is_charset(str[i - 1], charset))
			index++;
		i++;
	}
	return (size);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	int		a;
	int		*size;

	strs = malloc((words_count(str, charset) + 1) * sizeof(char*));
	size = strs_len(str, charset);
	a = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!is_charset(str[i], charset))
		{
			if (i == 0 || is_str(str[i], str[i - 1], charset))
				strs[a] = malloc(size[a] * sizeof(char));
			strs[a][j] = str[i];
			strs[a][++j] = '\0';
		}
		else if (i > 0 && !is_charset(str[i - 1], charset) && ++a)
			j = 0;
	}
	strs[words_count(str, charset)] = 0;
	return (strs);
}
