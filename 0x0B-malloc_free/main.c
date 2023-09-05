#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
int _strlen(char *s);
char *argstostr(int, char **);
int main(int argc, char **argv)
{
	char *s	= argstostr(argc, argv);
	puts(s);

}

char *argstostr(int ac, char **av)
{
	int i, total_size, counter, j;

	char *result_str;
	total_size = counter = 0;
	for (i = 1; i < ac; i++)
	{
		total_size += _strlen(av[i]);
	}

	result_str = (char *) malloc((sizeof(char) * total_size) + ac + 1);
	if (!result_str)
		return (NULL);
	for (i = 1, j = 0; i < ac && av[i][j]; i++, j++, counter++)
	{
		for (j = 0; j < _strlen(av[i]); j++, counter++)
                {
                        *(result_str + counter) = av[i][j];
                }
                result_str[counter] = '\n';

		
	}
	return (result_str);

}

int _strlen(char *s)
{
	int result;

	result = 0;
	while (*s++)
		result++;
	return result;
}
