#include <ctype.h>

/**
 * _strspn - similar to strspn
 *
 * @s: the haystack
 * @accept: the needle
 *
 * Return: number of accept char in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter, i, j;

	counter = 0;
	for (i = 0; s[i]; i++)
	{
		if (isalpha(s[i]))
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
					counter++;
			}
		} else
			break;
	}
	return (counter);
}
