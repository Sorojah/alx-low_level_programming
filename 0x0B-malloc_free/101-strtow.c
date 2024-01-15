#include "main.h"
#include <stdlib.h>

/**
 * wordcount - Counts the number of words in a string
 * @str: String to count words in
 * Return: Number of words
 */
int wordcount(char *str)
{
int count = 0, in_word = 0;
while (*str)
{
if (*str == ' ')
in_word = 0;
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
 * create_word - Creates a word from a string
 * @str: String to create word from
 * @word_len: Length of the word
 * Return: Newly created word
 */
char *create_word(char *str, int word_len)
{
char *word;
int j;
word = malloc((word_len + 1) * sizeof(char));
if (word == NULL)
return (NULL);
for (j = 0; j < word_len; j++)
word[j] = str[j];
word[j] = '\0';
return (word);
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 * Return: Pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
char **words;
int i = 0, word_len, wc;
if (str == NULL || *str == '\0')
return (NULL);
wc = wordcount(str);
if (wc == 0)
return (NULL);
words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
while (*str)
{
while (*str == ' ' && *str)
str++;
for (word_len = 0; str[word_len] != ' ' && str[word_len]; word_len++)
;
if (word_len == 0)
break;
words[i] = create_word(str, word_len);
if (words[i] == NULL)
{
while (i--)
free(words[i]);
free(words);
return (NULL);
}
str += word_len;
i++;
}
words[i] = NULL;
return (words);
}
