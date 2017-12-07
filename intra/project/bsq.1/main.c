#include "bsq.h"

int		main(int ac, char **av)
{
	if (ac > 1)
		bsq(ac, av, 0);
	else
		bsq(1, get_input(), 1);

	//get_input();
	return (0);
}