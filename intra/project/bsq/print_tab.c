#include "bsq.h"

#define SQRI (i > g_max_y - g_size && i < g_max_y + 1)
#define SQRJ (j > g_max_x - g_size && j < g_max_x + 1)

void	print_tab(t_map *map)
{
	int i;
	int j;

	i = 0;
	while (i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			//ft_putchar(map->map[i][j]);
			if (SQRI && SQRJ)
				ft_putchar(map->full);
			else
				ft_putchar(map->map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

//nub Andrei cu K
