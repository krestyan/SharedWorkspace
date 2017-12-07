#include "bsq.h"

void	bsq(int num, char **files, int mode)
{
	char	**map;
	int 	i;

	if (mode == 0) // gg andrei ELF!
		i = 1;
	else
		i = 0;
	while(i < num)
	{
		open_file(files[i]);
		i++;
	}
}