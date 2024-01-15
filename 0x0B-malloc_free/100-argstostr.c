#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all program arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
char *str;
int total_length = 0, i, j, k;

if (ac == 0 || av == NULL)
{
return (NULL);
}

/* Calculate total length for the new string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
total_length++;
}
total_length++; /* For newline after each argument */
}
total_length++; /* For null terminator */

str = malloc(total_length *sizeof(char));
if (str == NULL)
{
return (NULL);
}

/* Concatenating arguments */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k++] = av[i][j];
}
str[k++] = '\n'; /* Newline after each argument */
}
str[k] = '\0'; /* Null terminator */

return (str);
}
