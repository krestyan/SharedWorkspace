#include "bsq.h"

/* 
input are prea multa memorie
trebuie facut dinamic
*/
char	**get_input()
{
	char	buff[1];
	char	input[255];
	///char	*temp;
	
	int i = 0;
	while(read(0, buff, 1) != 0 && buff[0] != '\n')
	{

		printf("Buff = (%s)\n", buff);

		//temp = malloc((strlen(input) + strlen(buff) + 1) * sizeof(char));
		//input = strcpy(temp, input);
		//input = strcat(input, buff);
		//input = malloc(strlen(input) + 15);
	
		input[i] = buff[0];
		i++;

	}
	input[i] = '\0';
	printf("input = (%s)\n", input);
	return (ft_split_whitespaces(input));
}