#include <stdio.h>
#include <stdlib.h>


/**
 * man - function
 * @argc: length
 * @argv: number of argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
/*Declaring variables*/
int pos, tot, change, aux;
int coins[] = {25, 10, 5, 2, 1}; /*array inr*/

pos = tot = change = aux = 0;

if (argc != 2)
{
printf("error\n");
return (1);
}
tot = atoi(argv[1]); /*convert str to int*/

if (total <= 0)
{
printf("0\n");
return (0);
}

/* Declaring while*/

while (coins[pos] != '\0')
{
if (tot >= coin[pos])
{
aux = (tot / coins[pos]);
change += aux;
tot -= coins[pos] * aux;
}

pos++;

}
printf("%d\n", change);
return (0);
}
