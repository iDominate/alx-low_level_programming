
/**
 * factorial - prints the factorial of a number
 *
 * @n: number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	return (n + factorial(n + 1));

}
