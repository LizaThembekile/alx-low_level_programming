#include "main.h"
 /**
  * @print_to_98: Prints all natural numbers from input to 98
  *
  * @n: The number to begin counting at.
  * Return: 0
  */

void print_to_98(int n)
{
	int d = 1,
	int c = n;

	if  (n > 98)
		d = -1;
	if (c < 0)
		_putchar('-');
	print_any_int(n);

	while (c != 98)
	{
		_putchar(',');
		_putchar(' ');
		c = c + d;
		print_any_int(c);
	}
	_putchar('\n');
}
