#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Prints the minimum number of coins for change
* @argc: Argument count
* @argv: Argument vector
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int amount, coin_index, coin_count;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
coin_count = 0;
if (amount <= 0)
{
printf("0\n");
return (0);
}
for (coin_index = 0; coin_index < 5; coin_index++)
{
while (amount >= coins[coin_index])
{
coin_count++;
amount -= coins[coin_index];
}
}
printf("%d\n", coin_count);
return (0);
}
