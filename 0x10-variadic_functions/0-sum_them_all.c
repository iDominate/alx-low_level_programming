#include <stdarg.h>

/**
 * sum_them_all - sums numbers
 *
 * @n: the number of args
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int result;

	if (n == 0)
		return (0);
	result = 0;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(ptr, int);
	}
	va_end(ptr);
	return (result);
}
