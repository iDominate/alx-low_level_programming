#include <stdio.h>
int _atoi(char *s);
int pow_10(int n);
int main(int argc, char *argv[])
{
	printf("%d", _atoi("123"));

}


int _atoi(char *s)
{
	int a, len, i, j, begin, sign, result = 0;

	len = a = 0;
	i = 0;
	begin = j = 1;
	sign = 1;
	result = 0;
	if (*s == '-'){
		sign *= -1;
		i = 1;
		s++;
	}
	for (a = 0; s[a]; a++)
		len++;
	begin = pow_10(len - 1);
	for (a = 0; s[a]; a++)
	{
		result += (s[a] - 48) * begin;
		begin /= 10;
	}
	
	
	
	return (sign * result);
}

int pow_10(int n)
{
	int i, result;

	result = 1;
	for (i = 0; i < n; i++)
	{
		result *= 10;
	}
	return result;
}
