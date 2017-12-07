#include "bsq.h"

int		**convert(t_map *map)
{
	int	i;
	int	j;
	int	**output;

	output = malloc((map->y + 1) * sizeof(int*));
	output[map->y] = 0;
	i = 0;
	while(i < map->y)
	{
		output[i] = malloc((map->x + 1) * sizeof(int));
		output[i][map->x] = 0;
		i++;
	}

	i = 0;
	while(i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			if (map->map[i][j] == map->empty)
				output[i][j] = 1;
			else
				output[i][j] = 0;

			j++;
		}
		i++;
	}
	i = 0;
	printf("conver 1-0\n");
	while(i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			printf("%d", output[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("return conv\n");
	return (output);
}

//