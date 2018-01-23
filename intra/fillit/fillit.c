#include <stdio.h>

#include "resources/fillit.h"

int		file_checker(char	*file);


int		main(int argc, char *argv[])
{
	if(argc != 2)
	{
		print_error();
		return (0);
	}
	if(!file_checker(argv[1]))
	{
		print_error();
		return (0);
	}
}
