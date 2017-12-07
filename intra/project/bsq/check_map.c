#include "bsq.h"

int check_line(t_map *map)
{
	int bool;
	int len;
	int i;

	bool = 1;
	i = 0;
	len = ft_strlen(map->map[1]);
	while(map->map[i])
	{
		if (ft_strlen(map->map[i]) != len)
		{
			bool = 0;
			break;
		}
		i++;
	}
	return (bool);
}

int forbidden_chars(t_map *map)
{
	int i;
	int j;

	i = 0;
	while (i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			if (map->map[i][j] != map->empty && map->map[i][j] != map->obs)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

