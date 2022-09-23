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
		if (x == 100)
			printf("Buzz");
		else if (x % 3 == 0 && x % 5 ==)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("FIZZ");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);
	}
	_putchar('\n');
}
