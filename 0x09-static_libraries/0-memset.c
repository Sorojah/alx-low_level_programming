#include "main.h"

/**
 * _memset - Programme fills a block of memory with particular value
 * @s: begin  address of memory to be filled
 * @b: the desired value
 * @n: no. of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int a = 0
;
	for (; n > 0; a++)

	{

		s[a] = b;
		n--;
	}
	return (s);
}
