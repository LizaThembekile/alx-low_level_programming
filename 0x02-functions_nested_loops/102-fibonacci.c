#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers ", " separated
 *
 * Return: 0 on success and the stated print on stdout
 */

int main(void)
{
	int i;
	int fb1 = 1;
	int fb2 = 1;
	long fn = fb1;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", fn);
		if (i < 49)
			printf(", ");
		fn = fb1 + fb2;
		fb1 = fb2;
		fb2 = fn;
	}
	_putchar('\n\);
	return (0);
}
