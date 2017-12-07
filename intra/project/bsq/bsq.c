#include "bsq.h"

void	bsq(int num, char **files, int mode)
{
	t_map	*map;
	int 	i;

	if (mode == 0) // gg andrei ELF!
		i = 1;
	else
		i = 0;
	while(i < num)
	{
		printf("Reading file...\n");
		map = open_file(files[i]);
		i++;
	}
	printf("Finding max square...\n");
	find_max_square(map);
	printf("Printing tab... Please wait...! \n");
	print_tab(map);
}