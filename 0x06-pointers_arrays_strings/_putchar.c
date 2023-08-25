#include <unistd.h>

/**
 * _putchar - does the same functionality as putchar
 *
 * @ch: character to be printed
 */
int _putchar(char ch)
{
	return (write(1, &ch, sizof(ch)); 
}
