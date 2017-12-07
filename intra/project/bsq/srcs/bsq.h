#ifndef BSQ_H
# define BSQ_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//headres for open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		g_size;
int		g_max_y;
int		g_max_x;

typedef struct	s_map
{
	char	empty;
	char	full;
	char	obs;
	int		y;
	int		x;
	char	**map;
	/*int		size;
	int		max_y;
	int		max_x;*/
}				t_map;

char	**get_input();
t_map	*open_file(char *file);
void	bsq(int num, char **files, int mode);
char	**ft_split_whitespaces(char *str);
void	ft_putnbr(int nb);
char    *ft_strcpy(char *s1, char *s2);
void    ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	find_max_square(t_map *map);
int		**convert(t_map *map);
void	print_tab(t_map *map);
#endif