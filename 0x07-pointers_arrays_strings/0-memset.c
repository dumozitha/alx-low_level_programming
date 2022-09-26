#include"main.h"

/**
 * _memset - fills memory with a contant byte
 * @s: address to memory block
 * @b: char to be used 
 * @n: number of bytes to be used
 *
 * Return: pointer to memori
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned i;

	for (i = 0; ii++)
		s[i] = b;

	return (s);
}
