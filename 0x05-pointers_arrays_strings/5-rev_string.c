#include <string.h>
/**
 * rev_string - prints the reverse of a string
 *
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *start, *end;
	char temp;

	start = 0;
	end = 0;
	start = s;
	end = start + strlen(s) - 1;

	if (strlen(s) == 0)
		return;
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		++start;
		--end;

	}
}
