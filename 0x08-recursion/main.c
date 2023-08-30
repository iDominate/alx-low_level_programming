#include "main.h"
#include <stdio.h>
void _put_recursion(char *s)
{       
        if(!(*s)){        
                putchar('\n');
	}
        else{
                putchar(*s++);
		return _put_recursion(s);
	}
}

int main(void)
{
	_put_recursion("Hello World");
}
