#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - Selects the correct function for the operation.
* @s: The operator as a string.
* Return: Pointer to the corresponding function.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

/* Loop through the struct to find the matching operator */
for (i = 0; ops[i].op != NULL; i++)
{
if (*ops[i].op == *s)
{
return (ops[i].f);
}
}
return (NULL);
}
