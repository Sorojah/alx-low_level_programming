#include <stdio.h>
#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: String to be converted
* Return: The integer converted from the string
*/
int _atoi(char *s)
{
int index, sign, num, is_digit_found;
index = 0;
sign = 1;
num = 0;
is_digit_found = 0;
while (s[index] != '\0')
{
if (s[index] == '-')
sign *= -1;
if (s[index] >= '0' && s[index] <= '9')
{
num = num * 10 + (s[index] - '0') * sign;
is_digit_found = 1;
if (s[index + 1] < '0' || s[index + 1] > '9')
break;
}
index++;
}
if (!is_digit_found)
return (0);
return (num);
}

/**
* main - Multiplies two numbers
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
