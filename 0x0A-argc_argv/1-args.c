#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: unused
 *
 * Return: Always 0(Success)
 */
int main(int argc, char __attribute((__unused__)) * argv[])
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
