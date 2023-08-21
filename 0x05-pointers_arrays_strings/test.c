#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void)
{

	char *str = "Suite 402";
	int i, index;
	char buffer[100];
	index = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if ((isdigit(str[i]) || (str[i] == '-' && str[i + 1] != '-' && str[i + 1] != ' ' && str[i + 1] != '+')))
		{
			buffer[index] = str[i];
			index++;
		}
		if(isalpha(str[i]) && strlen(buffer) != 0 && str[i] != '-')
		{
			break;
		}
	}
	for (i = 0; i < index + 1; i++)
	{
		if(buffer[i])
		{
			putchar(buffer[i]);
		}
	}

}
