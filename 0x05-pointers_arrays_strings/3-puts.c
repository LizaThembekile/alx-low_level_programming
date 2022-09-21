#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: parameter
 * On success: returns no error
 */
void _puts(char *str)
{

	for (; *str != '\0' ; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
