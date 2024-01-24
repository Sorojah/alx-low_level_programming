#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point. Performs simple arithmetic operations.
* @argc: The number of arguments.
* @argv: Array of argument strings.
* Return: 0 on success, or exit with status 98, 99, or 100 on error.
*/
int main(int argc, char *argv[])
{
int num1, num2;
int (*func)(int, int);

/* Check argument count */
if (argc != 4)
{
printf("Error\n");
exit(98);
}

/* Convert arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

/* Get the function for the operation */
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}

/* Check for division or modulo by zero */
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

/* Perform the operation and print the result */
printf("%d\n", func(num1, num2));
return (0);
}
