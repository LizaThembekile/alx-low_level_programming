#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: parameter
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	putchar(x + '0');
	putchar('\n');
	return (x);
}
