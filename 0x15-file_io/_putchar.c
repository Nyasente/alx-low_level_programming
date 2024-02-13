#include <unistd.h>
#include "main.h"
/**
 * _putchar - wirtes the character to c to stdout
 * @c: the character to print
 *
 * Return: on sucess 1, on error -1 and errno is set
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
