#include "bsq.h"

t_map *open_file(char *file)
{
	int 	fd;
	int 	ret;
	char	str[255];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error!\n");
	}
	while (	ret = read(fd, str, 1))
	{
		printf("%s\n", str);
	}
	str[ret] = 0;
	printf("str = (%s)\n", str);


}