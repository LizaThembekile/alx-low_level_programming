#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid password
 * Return: 0 (Succecc)
 *
 */
int main(void)
{
	int passw, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		passw = (rand() % 128);
		sum += passw;
		printf("%c" , sum);
	}
	printf("%c" , 27772 - sum);

	return (0);
}
