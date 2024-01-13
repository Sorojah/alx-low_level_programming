#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the minimum number of coins to make change
* @argc: Argument count
* @argv: Argument vector
* Return: 0 if success, 1 if an error occurred
*/
int main(int argc, char *argv[])
{
int amount, coins_count, i;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
if (amount <= 0)
{
printf("0\n");
return (0);
}
coins_count = 0;
for (i = 0; i < 5; i++)
{
coins_count += amount / coins[i];
amount %= coins[i];
}
printf("%d\n", coins_count);
return (0);
}
