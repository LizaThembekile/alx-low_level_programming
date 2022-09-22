#include "main.h"
/**
* reverse_array -> reversing array
* @a: array a
* @n: array n
*/
void reverse_array(int *a, int n)
{
int k, i;

for (i = n - 1; i >= n / 2; i--)
{
k = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = k;
}
}
