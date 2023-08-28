#include <stddef.h>


/**
 * _strchr - similar to strchr
 *
 * @s: the buffer
 * @c: the char
 *
 * Return: a pointer to the first occurrence of c in string s
 */
char *_strchr(char *s, char c)
{
	char *char_p;

	char_p = NULL;
	while (*s++)
	{
		if (*s == c)
		{
			char_p = s;
			return (char_p);
		}
	}
	return (NULL);
}
