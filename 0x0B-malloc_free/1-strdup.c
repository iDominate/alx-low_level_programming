#include <stdlib.h>

/**
 * _strdup - dumps a string into a new buffer
 *
 * @s: the string
 *
 * Return: a pointer to the new string
 */
char *_strdup(char *s)
{
	int str_len, i;
	char *str_p;

	str_len = 1;

	for (i = 0; s[i]; i++)
	{
		str_len++;
	}
	str_p = (char *) malloc(sizeof(char) * str_len);
	if (!str_p)
	{
		return (NULL);
	}

	for (i = 0; i < str_len; i++)
	{
		*(str_p + i) = s[i];
	}
	return (str_p);
}

