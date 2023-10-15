#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * prints multiplesof three with fizz
 * prints multiples of five with buzz
 * both multiples of 3 and 5 print fizzbuzz
 * Return: 0
 * newline
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
		printf("%d", i);
		}
		else
		{
			printf("%d",i);
		}
	}
	printf("\n");

	return (0);
}
