#include <stdio.h>

int main(void)
{
	char buffer[98]= {0x00};

	char first_buffer = 0x01;
	char last_buffer = buffer[0];
	int i = 0;
	while (i < 95)
	{
		*(buffer + i) = first_buffer;
		i++;
	}
	*(buffer + i) = last_buffer;
	
	for (i = 0; i < sizeof(buffer); i++)
	{
		printf("0x%02x ", *(buffer+i));
	}	
}
