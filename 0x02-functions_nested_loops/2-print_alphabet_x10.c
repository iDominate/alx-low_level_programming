#include "_putchar.h"


/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int times;
	char ch;

	for (times = 0; times <= 9; times++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
