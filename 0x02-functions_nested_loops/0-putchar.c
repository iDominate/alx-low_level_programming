#include <stdio.h>
#include <string.h>
#include "_putchar.h"
/**
 * main - Entry point
 *
 * Restun: Always 0(Success)
 */

int main(void)
{
	size_t i;
       	char* string;

	string = "_putchar\n";

	for (i = 0; i < strlen(string); i++)
	{
		put_char((char) string[i]);
	}
	return (0);
}
