#include "main.h"

/**
 * _sqrt_recursion - prints the square root
 * @n: number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (power_by(n, 1));
}

/**
 * power_by - helper function
 *
 * @x: number
 * @y: number
 *
 * Return: int
 */
int power_by(int x, int y)
{
	if (x == y || x < 0)
		return (-1);
	if (y * y == x)
		return (y);
	else
		return (power_by(x, y + 1));
}

