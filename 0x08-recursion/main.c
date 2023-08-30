#include "main.h"
#include <stdio.h>
#include <string.h>
void _puts_recursion(char *s)
{
	s = s + strlen(s) - 1;
	putchar();
	

}

int main(void)
{
	_puts_recursion("Hello World");
}
