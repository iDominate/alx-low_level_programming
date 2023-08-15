#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void)
{
	int i = labs((long int)INT_MIN);
	
	int result;
	result = i % 10;
	printf("%d", i);
	putchar(48 + result);

}
