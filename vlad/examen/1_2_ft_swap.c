#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

int		main(void)
{
	int a, b;
	int *i, *j;

	a = 2;
	b = 3;
	i = &a;
	j = &b;
	printf("i = %i and j = %i\n", *i, *j);
	ft_swap(i, j);
	printf("i = %i and j = %i\n", *i, *j);

}


/*Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);*/