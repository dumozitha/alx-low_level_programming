#include"main.h"

/**
 * _memcpy -function that copies memroy area
 *
 * @dest: buffer where to copy to
 * @src: where to copy
 * @n: n byte of src
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
