#include <stddef.h>
#include <stdio.h>
/**
 * _strpbrk - similar to strpbrk
 *
 * @s: buffer
 * @accept: string
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
