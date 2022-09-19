#include "main.h"

/**
* prints the alphabet, in lowercase, followed by a new line
*
* Return: Always 0
*/

int print_alphabet(void)
{
int j;
for (j = 'a'; j <= 'z' ; j++)
{
_putchar(j);
}	
_putchar('\n');
print_alphabet();
return (0);
}
