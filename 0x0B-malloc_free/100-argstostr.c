#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concats all args
 *
 * @ac: argc
 * @av: argv
 *
 * Return: pointer to a new str
 */
char *argstostr(int ac, char **av)
{
	int i, total_size, counter, j;
	char *result_str;

	total_size = counter = 0;

	for (i = 1; i < ac; i++)
	{
		total_size += _strlen(av[i]);
	}

	result_str = (char *) malloc((sizeof(char) * total_size) + ac);
	if (!result_str)
	{
		free(result_str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++, counter++)
		{
			*(result_str + counter) = av[i][j];
		}
		result_str[counter] = '\n';
		counter++;
	}
	return (result_str);
}

/**
 * _strlen - similar to strlen
 *
 * @s: string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int result;

	result = 0;
	while (*s++)
		result++;
	return (result);
}

