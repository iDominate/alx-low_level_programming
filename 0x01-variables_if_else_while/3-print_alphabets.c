#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	char number;

	for (number = 97; number <= 122; number++)
	{
		putchar(number);
	}
	for (number = 65; number <= 90; number++)
	{
		putchar(number);
	}

	putchar('\n');
	return (0);


}
