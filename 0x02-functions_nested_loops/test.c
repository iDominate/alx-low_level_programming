#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = abs(-5768);
	int result;
	result = i % 10;
	putchar(48 + result);

}
