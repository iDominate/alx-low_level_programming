#include <stdio.h>
#include <string.h>
int power_by(int, int);

int _strlen_recursion(int n)
{
		return power_by(n, 2);
}

int power_by(int x, int y)
{
	if(x % 2 != 0)
		return -1;
	if(y * y == x)
		return y;
	else
		return power_by(x, y * 2);
}

int main(void)
{
	printf("%d",_strlen_recursion(1024));
}
