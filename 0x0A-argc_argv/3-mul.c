#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		puts("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}	
