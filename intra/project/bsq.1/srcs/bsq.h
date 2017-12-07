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

typedef struct	s_map
{
	char	empty;
	char	full;
	char	obs;
	char	**map;
}				t_map;


char	**get_input();
t_map	*open_file(char *file);
void	bsq(int num, char **files, int mode);
char	**ft_split_whitespaces(char *str);
void	ft_putnbr(int nb);
char    *ft_strcpy(char *s1, char *s2);
void    ft_putchar(char c);
void	ft_putstr(char *str);
#endif