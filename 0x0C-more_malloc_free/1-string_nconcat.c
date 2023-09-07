#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concats a n bytes of a string to a string
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from string 2
 *
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, s1_len, s2_len, counter;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	counter = 0;

	new_str = (char *) malloc(s1_len + n + 1);
	if (!new_str)
		return (NULL);
	if (!n)
		return (NULL);
	if (n > s2_len)
		n = s2_len;

	for (i = 0; s1[i]; i++)
	{
		new_str[counter] = s1[i];
		counter++;
	}

	for (i = 0; i < n; i++)
	{
		new_str[counter] = s2[i];
		counter++;
	}
	new_str[counter] = '\0';

	return (new_str);
}
/**
 * _strlen - calculates the length of string
 *
 * @s: string
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int result;

	result = 0;

	while (*s++)
		result++;
	return (result);

}

