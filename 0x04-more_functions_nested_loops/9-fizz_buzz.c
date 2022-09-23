#include "main.h"

/**
 * main - prints from 1 to 100. Trunc multiples of 3 for Fizz, 5 for buzz
 *
 * Return: 0 on success and the stated ptinr
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)

{
	if (x % 3 != 0 && x % 5 != 0)
	{
		printf("%d", x);
	}
	else if (x % 3 == 0 && x % 5 == 0)
{
		printf("FizzBuzz");
	}
	else if (x % 3 == 0)
	{
		printf("Fizz");
	}
	else if (x % 5 == 0)
	{
		printf("Buzz");
	}

	if (x < 100)
		printf(" ");
}
	_putchar('\n');
	return (0);
}
