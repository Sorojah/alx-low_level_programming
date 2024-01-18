#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 * Return: Pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memory;
unsigned int i;
char *initializer;

if (nmemb == 0 || size == 0)
return (NULL);

memory = malloc(nmemb * size);
if (memory == NULL)
return (NULL);

initializer = memory;
for (i = 0; i < nmemb * size; i++)
initializer[i] = 0;

return (memory);
}
