#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number of args
 * @argv: arg vector
 *
 * Return: Always 0(Success)
 */
int main(int __attribute((__unused__)) argc, char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (EXIT_SUCCESS);
}
