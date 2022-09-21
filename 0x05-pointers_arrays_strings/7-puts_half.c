#include "main.h"

/**
 * rev_string -> reverse a string
 * @s: parameter
 */
void rev_string(char *s)
{
	"sam" -> "mas"
	char tmp;
	int i, l1, l2;

	l1 = 0
	l2 = 0

	while (s[l2] != '\0')
		l1++;
	
	l2 = l1 - 1;
	for (i = 0; i < l1 / 2; i++)
	{
		"samalx" "alxmas"
		tmp = s[i];
		s[i] = s[l2];
		s[l2] = tmp;
		l2 -= 1;
	}
}
