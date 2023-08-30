#include "main.h"
#include <stdio.h>
#include <string.h>
int _strlen_recursion(char *c)
{
	if (!(*c))
		return 0;	
	return 1 + _strlen_recursion(c + 1);
}

int main(void)
{
	printf("%d",_strlen_recursion("Hello World"));
}
