#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @seperator: the sep
 * @n: numbr of args
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	if (n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (!str && i != (n - 1))
		{
			printf("(nil)%s", seperator);
			continue;
		}
		else if (!str)
		{
			printf("(nil)");
			continue;
		} else if (seperator && i != (n - 1))
			printf("%s%s", str, seperator);
		else
			printf("%s", str);
	}
	va_end(ptr);
	printf("\n");
}
