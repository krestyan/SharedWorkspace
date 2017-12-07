#include "bsq.h"

t_map *open_file(char *file)
{
	int 	fd;
	int 	ret;
	char	str[1];
	char	line[4096];
	t_map	*map;
	int		len;
	int	j;

	map = malloc(sizeof(t_map));
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error!\n");
	}
	int i  = 0 ;
	while (read(fd, str, 1) && str[0] != '\n')
		line[i++] = str[0];
	line[i] = 0;

	printf("str = (%s)\n", line);

	len = ft_strlen(line);

	map->full = line[len - 1];
	map->obs = line[len - 2];
	map->empty = line[len - 3];
	line[len - 3] = '\0';
	map->y = ft_atoi(line);




	line[0] = 0;
	i  = 0 ;
	while (read(fd, str, 1))
		line[i++] = str[0];
	line[i] = 0;
	//printf("%s", line);
	//map[x][y];
	if (ft_strlen(line) < 0)
	{
		write(2, "map error", 9);
		return;
	}
	map->map = ft_split_whitespaces(line);

	map->x = ft_strlen(map->map[0]);
	printf("%c\n", map->full);
	printf("%c\n", map->obs);
	printf("%c\n", map->empty);
	printf("y = %d\n", map->y);
	printf("x = %d\n", map->x);

	i = 0;
	while(i < map->y)
	{
		printf("%s\n", map->map[i]);
		i++;
	}
	/*i = 0;
	while(i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			if (map->map[i][j] == map->empty)
				map->map[i][j] = 1;
			else
				map->map[i][j] = 0;

			j++;
		}
		i++;
	}
	i = 0;
	while(i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			printf("%d", map->map[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}*/

	return (map);
}