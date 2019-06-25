/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobarite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 03:20:29 by tobarite          #+#    #+#             */
/*   Updated: 2019/06/24 22:35:55 by tobarite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

char		**ft_split(char *str, char *charset);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		ft_putchar(' ');
		i++;
	}
}

void	ft_printtab(char **tab)
{
	int i;

	i = 1;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_square(char **map, int posx, int posy, char obs, int taille, int max)
{
	int i;
	int j;

	i = posx;
	j = posy;
	if (posx + taille == max || posy + taille == max)
		return (taille - 1);
	while (i < posx + taille && map[i])
	{
		j = posy;
		while (j < posy + taille && map[i][j])
		{
			if (map[i][j] == obs)
				return (taille - 1);
			j++;
		}
		i++;
	}
	return (ft_check_square(map, posx, posy, obs, taille + 1, max));
}

char	**ft_build_square(char **map, int taille, int posx, int posy, char plein)
{
	int i;
	int j;

	i = posx;
	j = posy;
	while (j < posy + taille && map[j])
	{
		i = posx;
		while (i < posx + taille && map[j][i])
		{
			map[i][j] = plein;
			i++;
		}
		j++;
	}
	return map;
}

char	**ft_run(char **map, char obs, char plein, int max)
{
	int x;
	int y;
	int record;
	int tmp;
	int	posx;
	int	posy;

	x = 1;
	y = 0;
	max = max - 1;
	posx = 0;
	posy = 0;
	record = 0;
	tmp = 0;
	while (x < max - posx)
	{
		y = 0;
		while(y < max - posy)
		{
			while (map[x][y] == plein)
				y++;
			if (map[x][y] != plein)
				tmp = ft_check_square(map, x, y, obs, tmp, max);
				if (tmp > record)
				{
					record  = tmp;
					posx = x;
					posy = y;
				}
			y++;
		}
		x++;
	}
	return (ft_build_square(map, record, posx, posy, plein));
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int tot;

	i = 0;
	neg = 1;
	tot = 0;
	while (str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' ||
			str[i] == ' ' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		tot = tot * 10;
		tot = tot + (str[i] - '0');
		i++;
	}
	return (tot * neg);
}

void	ft_affmap(char *name)
{
	int		parse;
	int		i;
	int		len;
	char	buf;
	char	*tmp;
	char	**map;
	char	vide;
	char	obs;
	char	plein;
	int		lon;

	i = 0;
	parse = open(name, O_RDONLY);
	while (read(parse, &buf, 1))
		i++;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	close(parse);
	parse = open(name, O_RDONLY);
	i = 0;
	while (read(parse, &buf, 1))
	{
		tmp[i] = buf;
		i++;
	}
	map = ft_split(tmp, "\n");
	len = ft_strlen(map[0]);
	plein = map[0][len - 1];
	obs = map[0][len - 2];
	vide = map[0][len - 3];
//	ft_printtab(map);
	map[0][len - 3] = 'a';
	lon = ft_atoi(map[0]);
//	printf("\nvide    = %c\n", vide);
//	printf("plein   = %c\n", plein);
//	printf("obstale = %c\n", obs);
//	printf("taille  = %d\n", lon);
		ft_printtab(ft_run(map, obs, plein, lon));
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_affmap(av[i]);
		i++;
	}
	return (0);
}
