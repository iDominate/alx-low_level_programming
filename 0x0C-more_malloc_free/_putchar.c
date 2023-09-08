#include <unistd.h>

/**
 * _putchar - similar to putchar
 * @s: a character
 *
 * Return: void
 */
void _putchar(char s)
{
	write(1, &s, sizeof(s));
}

/**
 * _put - similar to puts
 *
 * @s: the string
 *
 * Return: 0
 */
void _puts(char *s)
{
	while(*s)
	{
		_putchar(*s++);
	}
}

void _putint(int n)
{
	write(1, &n, sizeof(n));
}
