#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @c: the character to print
 * Return on success 1
 * On error, -1 is given
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
