/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 16:46:36 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/22 16:50:59 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dest_malloc;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dest_malloc = (char *)malloc(sizeof(*src) * (i + 1));
	while (j < i)
	{
		dest_malloc[j] = src[j];
		j++;
	}
	dest_malloc[i] = '\0';
	return (dest_malloc);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	int					j;
	struct s_stock_str	*par;

	i = 0;
	j = 0;
	if (argc < 0)
		return (0);
	par = (t_stock_str *)malloc(sizeof(t_stock_str) * argc + 1);
	par[i].copy = ft_strdup(argv[i]);
	while (i < argc)
	{
		par[i].size = ft_strlen(argv[i]);
		par[i].str = argv[i];
		par[i].copy = ft_strdup(argv[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
