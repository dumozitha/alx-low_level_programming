#include "main.h"

/**
 * _strcat - contcateens two strings but uses n from src
 *
 * @src: string to be completed at end of dest
 * @dest: string to uppend
 * @n: integer to compare  index to
 *
 * Return: new string
 */
char *_strcat(cahr *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
