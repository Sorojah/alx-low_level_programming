#include "main.h"

/**
 * create_array - Creates and initializes an array of chars.
 * @size: Size of the array.
 * @c: Char to initialize the array with.
 * Return: Pointer to array or NULL if allocation fails or size is 0.
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
{
return (NULL);
}

array = malloc(size);
if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
