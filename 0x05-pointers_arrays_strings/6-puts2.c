#include "main.h"
#include <string.h>
/**
 * puts2 - prints every even indexed char in a string
 *
 * @s: string
 *
 * Return: void
 */
void puts2(char *s)
{
	size_t i;

	for (i = 0; i < strlen(s); i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(s[i]);
	}
	_putchar('\n');
}
