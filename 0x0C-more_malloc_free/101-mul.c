#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	if ( argc < 3)
	{
		_puts("Error\n");
		exit(98);
	}
	_putint((_atoi(argv[1]) * _atoi(argv[2])));
	return (0);
}

/**
 * _atoi - atoi
 *
 * @s: string
 *
 * Return: number
 */
long int _atoi(char *s)
{
	int a, len, j, begin, sign, result = 0;

	len = a = 0;
	begin = j = 1;
	sign = 1;
	result = 0;
	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	for (a = 0; s[a]; a++)
		len++;
	begin = pow_10(len - 1);
	for (a = 0; s[a]; a++)
	{
		if (!(s[a] >= 48 && s[a] <= 57))
			_puts("Error\n");
		result += (s[a] - 48) * begin;
		begin /= 10;
	}
	return (sign * result);
}

/**
 * pow_10 - power by ten
 *
 * @n: exponent
 *
 * Return: number
 */
int pow_10(int n)
{
	int i, result;

	result = 1;
	for (i = 0; i < n; i++)
	{
		result *= 10;
	}
	return (result);
}
