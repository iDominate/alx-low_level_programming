#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_func - get function
 *
 * @identifier: indentifier
 * @arr: array
 *
 * Return: void
 */
void (*get_func(char identifier, struct char_function *arr))(va_list * arg)
{
	int i;

	i = 0;
	while (arr[i].character)
	{
		if (identifier == arr[i].character)
		{
			return (arr[i].func_ptr);
		}
		i++;
	}
	return (NULL);
}

/**
 * print_all - print all
 *
 * @format: string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	void (*func_ptr)(va_list *);

	char_func_ptr format_arr[] = {
		{'c', print_char},
		{'f', print_float},
		{'s', print_string},
		{'i', print_integer}
	};
	i = 0;
	if (!format)
		return;
	va_start(args, format);
	while (format[i] != '\0')
	{
		func_ptr = get_func(format[i], format_arr);
		if (func_ptr)
		{
			func_ptr(&args);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - print a char
 *
 * @args: args
 *
 * Return: void
 */
void print_char(va_list *args)
{
	printf("%c", (char) va_arg(*args, int));
}
/**
 * print_string - print str
 *
 * @args: args
 *
 * Return: void
 */
void print_string(va_list *args)
{
	printf("%s", va_arg(*args, char *));
}
/**
 * print_float - print float
 *
 * @args: args
 *
 * Return: void
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_integer - print_integer
 *
 * @args: args
 *
 * Return: void
 */
void print_integer(va_list *args)
{
	printf("%i", va_arg(*args, int));
}
