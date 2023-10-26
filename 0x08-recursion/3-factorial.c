#include "main.h"
/**
 * factorial - prints factorial of a number
 * @n: function parameter
 * Return: function n 
 */
int factorial(int n)
{
	if (n == 0)
	return (1);
	if (n < 0)
	return (-1);
	return (n *factorial(n - 1));
}
