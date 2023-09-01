#include "main.h"

int is_palindrome(char *s)
{
	int len;

	len = (_strlen(s) / 2) - 1;
	return is_pali(s, s[0], *(s + _strlen(s) - 1), len);
}

int is_pali(char *c, char *f, char *l, int len)
{

	if(!f && !l)
		return (1);
	if(*f++ != *l++)
		return (0);
	else
		return 1 * is_pali(c, f, l, len);

}

int _strlen(char *s)
{
	int result;

	result = 0;
	while (*s++)
		result++;
	return result;
}

