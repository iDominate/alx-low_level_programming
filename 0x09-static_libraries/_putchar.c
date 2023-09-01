#include <unistd.h>

/**
 * _putchar - puts a char to the stout
 *
 * @ch: character
 *
 * Return: 0(Success)
 */
int _putchar(char ch)
{
	write(1, &ch, sizeof(ch));
	return (0);
}
