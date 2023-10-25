#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The characterto print
 *
 * Return: 1 if you succeed
 * On error - -1 is returned
 */
int _putchar(char c)
{
	return(write (1, &c, 1));
}
