#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 101 || alpha == 113)
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
