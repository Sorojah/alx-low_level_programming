#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - Checks if the string consists only of digits
* @str: The string to check
*
* Return: 1 if string contains only digits, 0 otherwise
*/
int check_num(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
{
return (0);
}
}
return (1);
}

/**
* main - Sums the numbers provided as arguments
* @argc: Count of arguments
* @argv: Array of arguments
*
* Return: 0 if success, 1 if an error occurred
*/
int main(int argc, char *argv[])
{
int sum = 0;

for (int i = 1; i < argc; i++)
{
if (check_num(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
