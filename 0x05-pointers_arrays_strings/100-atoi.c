#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - attempts to convert a string to an int
 *
 * @s: the given string
 *
 * Return: int(Success)
 */
int _atoi(char *s)
{
	char buffer[10];
	int index;
	size_t i;

	index = 0;
	buffer[0] = '\0';
	if (atoi(s) != 0 && s[0] != '0')
		return (atoi(s));
	else if (s[0] == '0')
		return (0);

		for (i = 0; i < strlen(s); i++)
		{
			if (isalpha(s[i]) && strlen(buffer) != 0)
				break;
			if (isdigit(s[i]) || (s[i] == '-' && isdigit(s[i + 1])))
			{
				buffer[index] = s[i];
				index++;
			}
		}

	return (atoi(buffer));
}
