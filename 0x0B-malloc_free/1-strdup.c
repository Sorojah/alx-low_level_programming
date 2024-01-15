#include "main.h"
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to new string or NULL
 */

char *_strdup(char *str)
{
char *dup;
unsigned int len;

if (str == NULL)
{
return (NULL);
}

len = strlen(str);

dup = malloc(len + 1);
if (dup == NULL)
{
return (NULL);
}

for (unsigned int i = 0; i < len; i++)
{
dup[i] = str[i];
}
dup[len] = '\0';

return (dup);
}
