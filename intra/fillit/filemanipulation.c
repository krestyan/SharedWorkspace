#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "resources/fillit.h"

int		file_checker(char	*file)
{
	int		fd;
	char	buffer[4096];
	int		ret;

	fd = open(file, O_RDONLY);
	if(fd == -1)
	{
		print_error();
		return (0);
	}
	ret = read(fd, buffer, 4096);
	buffer[ret] = '\0';
	puts(buffer);	/* modifherey here */
	if(close(fd) == -1)
	{
		print_error();
		return (0);
	}
	return (1);
}