#include <stdio.h>
#include <string.h>

int main(void)
{
	char number;
	for(number=48; number <= 57;number++)
	{
		putchar(number);
		
		if(number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');
	return (0);



}
