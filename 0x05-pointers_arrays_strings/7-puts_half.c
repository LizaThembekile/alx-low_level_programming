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
	int x, y;

	x = 0;
	while (str[x] != '\0')
		x++;

	y = x / 2;
	if (x % 2 == 1)
		y++;

	while (y < x)
	{
		putchar(str[y]);
		y++;
	}
	putchar('\n');
}
