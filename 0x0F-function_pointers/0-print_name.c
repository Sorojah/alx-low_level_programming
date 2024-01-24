#include "function_pointers.h"
#include <stdio.h>

/**
* print_as_is - prints the string as it is
* @str: string to print
*/
void print_as_is(char *str)
{
if (str == NULL)
return;
printf("%s\n", str);
}

/**
* print_uppercase - prints the string in uppercase
* @str: string to print
*/
void print_uppercase(char *str)
{
int i;
if (str == NULL)
return;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
printf("%c", str[i] - 'a' + 'A');
else
printf("%c", str[i]);
}
printf("\n");
}

/**
* print_name - calls a function to print name
* @name: name to print
* @f: pointer to the function that prints name
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
