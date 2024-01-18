#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum integer value
 * @max: Maximum integer value
 * Return: Pointer to the new array or NULL
 */
int *array_range(int min, int max)
{
int *array;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;

array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = min + i;
}

return (array);
}
