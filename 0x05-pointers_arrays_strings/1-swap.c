
/**
 * swap_int - swaps two ints given their pointers
 *
 * @a: first int pointer
 * @b: second int pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int mid;

	mid = 0;
	mid = *a;
	*a = *b;
	*b = mid;

}
