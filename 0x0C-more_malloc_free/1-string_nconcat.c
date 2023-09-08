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
	char *new_str, *str1, *str2;
	unsigned int i, s1_len, s2_len, counter;


	str1 = s1;
	str2 = s2;

	if (s1 == NULL)
		str1 = "";
	if (s2 == NULL)
		str2 = "";
	s1_len = _strlen(str1);
	s2_len = _strlen(str2);
	counter = 0;

	new_str = (char *) malloc(s1_len + n + 1);
	if (!new_str)
		return (NULL);

	if (n > s2_len)
		n = s2_len;

	if (str1)
	{

	for (i = 0; str1[i]; i++)
	{
		new_str[counter] = str1[i];
		counter++;
	}
	}
	if(str2 && n != 0)
	{
	for (i = 0; i < n; i++)
	{
		new_str[counter] = str2[i];
		counter++;
	}
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

