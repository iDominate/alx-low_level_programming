#include "main.h"

/**
 * is_prime_number - is prime number
 * @n: number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - helper function
 * @x: number
 * @y: number
 *
 * Return: int
 */
int is_prime(int x, int y)
{
	if (x < 0)
		return (0);
	if (x == 1)
		return (0);
	if (y == 10)
		return (1);
	if (x % y == 0 && (x != y))
		return (0);
	else
		return (is_prime(x, y + 1));
}

