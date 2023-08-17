#include <ctype.h>

/**
 * _isupper - checks whether a certain character is uppercase
 *
 * @c: charater to check
 *
 * Return: 0 (lowercase) | 1 (uppercase)
 */
int _isupper(char c)
{
	return (isupper(c) ? 1 : 0);
}
