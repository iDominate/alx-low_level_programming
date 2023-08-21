#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - attempts to convert a string to an int
 *
 * @s: the given string
 *
 * Return: int(Success)
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sign);
}
