#include "main.h"
/**
 * factorial - prints factorial of a number
 * @n: function parameter
 * Return: 0 . If error return -1
 */
int factorial(int n)
{
	if (n == 0)
	return (1);
	if (n < 0)
	return (1);
	return (n *factorial(n - 1));
}
