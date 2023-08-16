#include <stdio.h>

int main(void)
{
	int year = 2000;

	if (((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))))
	{
		printf("True");
	}else
	{
		printf("False");
	}

}
