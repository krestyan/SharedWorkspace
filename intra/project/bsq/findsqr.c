#include "bsq.h"

int min(int a, int b, int c)
{
  int m = a;
  if (m > b)
    m = b;
  if (m > c)
    m = c;
  return m;
}

void find_max_square(t_map *map)
{
	int	i;
	int	j;
	int S[map->y][map->x];
	int **M;
	int max_of_s;
	int max_i;
	int max_j;
	int R;
	int C;

	C = map->x;
	R = map->y;
	i = 0;
	M = convert(map);
	printf("00\n");
	while (i < R)
	{
		S[i][0] = M[i][0];
		i++;
	}
	printf("01\n");
	j = 0;
	while (j < C)
	{
		S[0][j] = M[0][j];
		j++;
	}
	i = 1;
	printf("02\n");
	while (i < R)
	{
		j = 1;
		while (j < C)
		{
			if(M[i][j] == 1)
        		S[i][j] = min(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1;
    		else
        		S[i][j] = 0;
			j++;
		}
		i++;
	}
	printf("03\n");
	max_of_s = S[0][0];
	max_i = 0;
	max_j = 0;
	i = 0;
	while(i < R)
	{
		j = 0;
		while(j < C)
		{
			if(max_of_s < S[i][j])
			{
				max_of_s = S[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	g_max_y = max_i;
	g_max_x = max_j;
	g_size = max_of_s;

}