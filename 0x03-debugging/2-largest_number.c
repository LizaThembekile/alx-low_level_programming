#include "main.h"

/**
 * largest_number - returns the largest number of 3 number
 * @a: 1st intg
 * @b: 2nd intg
 * @c: 3rd intg
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest:
if (a > b && a > c)
{
largest = a;
}
else if (b > c && b > a)
{
largest = c;
}
else
{
largest = b;
}
return (largest);
}
