#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - Adds two numbers.
* @a: First integer.
* @b: Second integer.
* Return: Sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Subtracts one number from another.
* @a: First integer.
* @b: Second integer.
* Return: Difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Multiplies two numbers.
* @a: First integer.
* @b: Second integer.
* Return: Product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Divides one number by another.
* @a: First integer (dividend).
* @b: Second integer (divisor).
* Return: Quotient of a divided by b.
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - Calculates the modulo of two numbers.
* @a: First integer.
* @b: Second integer.
* Return: Remainder of a divided by b.
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
