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
	i = j = 0;
	while (i < sizeof(s))
	{
		if (isalpha(s[i]))
		{
			while (j < sizeof(accept))
			{
				if (s[i] == accept[j])
					counter++;
				j++;
			}
			j = 0;
		} else
			break;
		i++;
	}
	return (counter ? counter : 0);
}
