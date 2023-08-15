#include <ctype.h>

/**
 * _islower - checks whether the given ascii is lower
 *
 * @ch:  the given ascii number
 *
 * Return: lower 1(True) | upper 0(False)
 */
int _islower(int ch)
{
	return (islower(ch) ? 1 : 0);
}
