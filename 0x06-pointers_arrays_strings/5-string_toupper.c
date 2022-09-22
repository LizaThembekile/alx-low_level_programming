include "main.h"

/**
 * string_toupper - changer lower case to upper case
 * @str: string to be changed
 *
 * Return: Addreaa to string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
