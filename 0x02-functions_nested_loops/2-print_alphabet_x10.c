#include "main.h"

/**
* prints_alphabet_x10 -> prints x10 alphabet,lowercase, ff by a new line.
*/

void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
{
	for (j = 'a' ; j <= 'z' ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
}
