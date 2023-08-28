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
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
