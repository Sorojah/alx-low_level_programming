#include "main.h"
#include <stdlib.h>

/**
 * wordcount - counts the number of words in a string
 * @str: string to count words in
 * Return: number of words
 */
int wordcount(char *str)
{
int count = 0, in_word = 0;

while (*str)
{
if (*str == ' ')
{
in_word = 0;
}
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
char **words;
int i = 0, j, k, wc, word_len;

if (str == NULL || *str == '\0')
return (NULL);

wc = wordcount(str);
if (wc == 0)
return (NULL);

words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (k = 0; *str; k++)
{
while (*str == ' ' && *str)
str++;

for (word_len = 0; str[word_len] != ' ' && str[word_len]; word_len++)
;

if (word_len == 0)
break;

words[i] = malloc((word_len + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i--)
free(words[i]);
free(words);
return (NULL);
}

for (j = 0; j < word_len; j++)
words[i][j] = str[j];
words[i][j] = '\0';

str += word_len;
i++;
}
words[i] = NULL;
return (words);
}
