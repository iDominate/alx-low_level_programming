
/**
 * _pow_recursion - desc
 *
 * @x: number
 * @y: power
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (0);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));

}
