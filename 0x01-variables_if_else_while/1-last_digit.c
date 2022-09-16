#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is positive, negative, or zero
*
* Description: using the main function
* this program prints "This program will assign a random number to the variable n each time it is executed
* Return: 0
*/

int main(void)
{
int n;
int 1;

srand(time(0));
n = rand() - RAND_MAX / 2;
1 = n % 10;

if (1 > 5)
{
        printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
{
        printf("Last digit of %d is %d and is 0\n", n, n % 10);
}

return (0);
}
^C
