#include <stdio.h>
#include <string.h>


/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar((char)number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);



}
