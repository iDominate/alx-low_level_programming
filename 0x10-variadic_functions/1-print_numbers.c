#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @seperator: the sep
 * @n: numbr of args
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		if (seperator && i != (n - 1))
			printf("%d%s", va_arg(ptr, int), seperator);
		else
			printf("%d", va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
