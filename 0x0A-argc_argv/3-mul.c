#include <stdio.h>
#include "stdlib.h"
/**
 * main - prints multiple of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0, If error Return 1
 */
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
