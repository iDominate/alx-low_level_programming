#include <stddef.h>

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
	unsigned int i, j;
	char *result;

	i = j = 0;
	while (i < sizeof(s))
	{
		while (j < sizeof(accept))
		{
			if (s[i] == accept[j])
			{
				result = &s[i];
				return (result);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
