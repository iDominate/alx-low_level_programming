
/**
 * _memset - similar to _memset
 *
 * @s: the buffer
 * @b: the character
 * @n: number of bytes
 *
 * Return: pointer to a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
