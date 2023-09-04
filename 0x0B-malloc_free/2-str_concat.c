#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to a new string
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i, counter;
	char *str_p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	counter = 0;
	s1_len = 0;
	s2_len = 1;
	for (i = 0; s1[i]; i++)
		s1_len++;
	for (i = 0; s2[i]; i++)
		s2_len++;
	str_p = (char *) malloc(s1_len + s2_len);

	if (!str_p)
		return (NULL);
	for (i = 0; i < s1_len; i++, counter++)
	{
		str_p[i] = s1[i];
	}

	for (i = 0; i < s2_len; i++, counter++)
	{
		str_p[counter] = s2[i];
	}
	return (str_p);
}
