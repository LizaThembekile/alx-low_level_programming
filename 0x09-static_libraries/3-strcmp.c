#include "main.h"
#include <string.h>
/**
* _strcmp -> Comparing
* @s1: 1st param
* @s2: 2nd param
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
