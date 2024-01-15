#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string; treated as empty if NULL.
 * @s2: Second string; treated as empty if NULL.
 * Return: Pointer to new concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
char *concat_str;
int len1 = s1 ? strlen(s1) : 0;
int len2 = s2 ? strlen(s2) : 0;

concat_str = malloc(len1 + len2 + 1);
if (concat_str == NULL)
{
return (NULL);
}

if (s1)
{
strcpy(concat_str, s1);
}
if (s2)
{
strcpy(concat_str + len1, s2);
}

return (concat_str);
}
