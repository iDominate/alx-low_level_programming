#include <ctype.h>

/**
 * _isdigit - checks whether a char is a digit
 *
 * @c: character to be checked
 *
 * Return: 1 (digit) | 0 (not a digit)
 */
int _isdigit(int c)
{
	return (isdigit(c) ? 1 : 0);
}
