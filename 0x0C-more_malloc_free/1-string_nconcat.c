#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string, n bytes of this are concatenated to s1
 * @n: Number of bytes from s2 to concatenate to s1
 * Return: Pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length1 = 0, length2 = 0, i, totalLength;
char *newStr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

if (n >= length2)
n = length2;
totalLength = length1 + n;

newStr = malloc(totalLength + 1);
if (newStr == NULL)
return (NULL);

for (i = 0; i < length1; i++)
newStr[i] = s1[i];
for (i = 0; i < n; i++)
newStr[length1 + i] = s2[i];
newStr[totalLength] = '\0';

return (newStr);
}
