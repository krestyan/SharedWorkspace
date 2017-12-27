#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void	print_error(void)
{
	putstr("error\n");
}

int		main(int argc, char *argv[])
{
	int		fd;
	char	buffer[4096];
	int		ret;

	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		print_error();
		return 1;
	}
	ret = read(fd, buffer, 4096);
	buffer[ret] = '\0';
	if(close(fd) == -1)
	{
		print_error();
		return 1;
	}
}