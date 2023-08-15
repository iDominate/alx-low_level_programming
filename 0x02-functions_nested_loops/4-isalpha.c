#include <ctype.h>

/**
 * _isalpha - prints whether the given ascii is aplha
 *
 * @c: an int value
 *
 * Return: 1(True) | 0(False)
 */
int _isalpha(int c)
{
	return (isalpha(c) ? 1 : 0);
}
