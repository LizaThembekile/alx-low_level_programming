#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 -> puts2 function
 * @str: parameter
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
