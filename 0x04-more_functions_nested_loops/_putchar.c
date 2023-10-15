#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes character to stdout
 * @c: the character to print
 *
 * Return: On sucess 1
 * On erro, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
