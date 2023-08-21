/**
 * reset_to_98 - resets the given pointer's value to 98
 *
 * @n: the pointer to an int
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	int var;
	int *p;

	var = 98;
	p = &var;
	*n = *p;

}
