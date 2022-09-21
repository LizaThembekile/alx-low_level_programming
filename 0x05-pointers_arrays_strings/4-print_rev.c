#include "main.h"
#include <stdio.h>

/**
 * print_rev -> prints string in reverse
 * @s: the string printed in reverse
 */
void print_rev(char *s)
{
	int c;
	
	for (c = 0; s[c] != '\0'; c++)
		;
	for (c = c - 1; s[c] != '\0'; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
