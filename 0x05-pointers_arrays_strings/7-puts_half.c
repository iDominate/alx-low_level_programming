#include "main.h"
#include <string.h>
/**
 * puts_half - print half of the string
 *
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	size_t second_half_offset, i;

	if (strlen(str) % 2 != 0)
		second_half_offset = (strlen(str) / 2) + 1;
	else
		second_half_offset = (strlen(str) / 2);

	for (i = second_half_offset; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
