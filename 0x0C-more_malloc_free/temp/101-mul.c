#include "main.h"
#include <stdlib.h>

/**
 * is_digit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if digit, 0 otherwise
 */
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * is_number - checks if a string is a number
 * @str: string to check
 * Return: 1 if string is a number, 0 otherwise
 */
int is_number(char *str)
{
int i = 0;
if (str[0] == '-' || str[0] == '+')
i = 1;
while (str[i])
{
if (!is_digit(str[i]))
return (0);
i++;
}
return (1);
}

/**
 * print_number - prints a long number using putchar
 * @n: number to print
 */
void print_number(long n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
putchar((n % 10) + '0');
}

/**
 * string_to_long - converts a string to a long int
 * @str: string to convert
 * Return: converted long int
 */
long string_to_long(char *str)
{
long num = 0;
int i = 0, sign = 1;

if (str[i] == '-')
{
sign = -1;
i++;
}
else if (str[i] == '+')
{
i++;
}

while (str[i])
{
num = num * 10 + (str[i] - '0');
i++;
}
return (num *sign);
}

/**
 * main - Entry point, multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
long num1, num2, result;

if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
exit(98);
}

num1 = string_to_long(argv[1]);
num2 = string_to_long(argv[2]);
result = num1 *num2;

print_number(result);
putchar('\n');
return (0);
}
