#include "main.h"
/**
* _strcat ->Function strcat
* @dest: first parameter
* @src: second parameter
* Return: return value of dest
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
j = 0;

while (dest[i++])
	j++;
for (i = 0; src[i]; i++)
	dest[j++] = src[i];

return (dest);
}
