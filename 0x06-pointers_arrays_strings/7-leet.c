#include "main.h"

/**
 * leet -> a leet function
 * @x: parameter
 * Return: A string
 */
char *leet(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		str[i] = transform(x[i]);
		i++;
	}
	return (x);
}
/**
 * transform - hlper function
 * @x: char to be encoded
 *
 * Return: the encoded char
 */
char transform(char x)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char replacement = x;

	while (i < 8)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + '0';
			break
		}
		i++;
	}
	return (replacement);
}
