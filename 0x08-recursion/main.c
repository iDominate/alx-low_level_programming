#include <stdio.h>
#include <string.h>
int is_prime(int, int);
int is_prime_number(int);

int is_prime_number(int n)
{
	return is_prime(n, 2);
}

int is_prime(int x, int y)
{
	if(y == 10)
		return (1);
	if (x % y == 0 && (x != y))
		return (0);
	else 
		return is_prime(x, y + 1);
}

int main(void)
{
	printf("%d",is_prime_number(25));
}
