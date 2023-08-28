

/**
 * _memcpy - similar to memcpy
 *
 * @dest: destination buffer
 * @src: srouce buffer
 * @n: number of bytes
 *
 * Return: a pointer to a destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return dest;
}
