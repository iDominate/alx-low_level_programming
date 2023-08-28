#include <stdio.h>

int main(void)
{
	int i, j;
	i = j = 0;
	char buffer[3][2]= {{1,2}, {2,4}, {5, 6}};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("%c", *(buffer + i + j));
		}

	}
}
