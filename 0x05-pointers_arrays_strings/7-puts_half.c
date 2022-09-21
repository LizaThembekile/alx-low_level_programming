#include "main.h"
#include <stdio.h>
/**
 * puts_half - a string
 * @str: string parameter
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int x, y, i;

	x = len(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	putchar('\n');
}
