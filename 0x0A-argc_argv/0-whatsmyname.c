#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: a string vector of all arguements
 * Return: Always 0(Success)
 */
int main(int __attribute((__unused__)) argc, char **argv)
{
	printf("%s\n", *argv);
	return (EXIT_SUCCESS);
}
