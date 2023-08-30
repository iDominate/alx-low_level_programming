#include "main.h"
#include <stdio.h>
void _puts_recursion(char *s)
{       
        if(!(*s)){        
                putchar('\n');
	}
        else{
                putchar(*s++);
		return _puts_recursion(s);
	}
}

int main(void)
{
	_puts_recursion("Hello World");
}
