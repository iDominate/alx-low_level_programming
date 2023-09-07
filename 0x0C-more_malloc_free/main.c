#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", s);

}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, s1_len, counter;

	s1_len = _strlen(s1);
	counter = 0;

	new_str = (char *) malloc(s1_len + n + 1);
	if (!new_str)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		new_str[counter] = s1[i];
		counter++;
	}

	for (i = 0; i < n;i++)
	{
		new_str[counter] = s2[i];
		counter++;
	}
	new_str[counter] = '\0';

	return (new_str);
}

int _strlen(char *s)
{
	int result;

	result = 0;

	while (*s++)
		result++;
	return result;

}

