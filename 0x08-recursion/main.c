#include <stdio.h>
#include <string.h>
#include "main.h"

int is_palindrome(char *s)
{
	return is_pali(s, s[0]);
}

int is_pali(char *c, char ch)
{
	if(!ch)
		return (1);
	if(*c == ch && *(c + 1) == '\0')
		return (1);
	else if (*c != ch && *(c + 1) == '\0')
		return (0);
	else
		return is_pali(c + 1, ch);
	
}

int main(void)
{
	char *c = "";
	printf("%d",is_palindrome(c));
}
