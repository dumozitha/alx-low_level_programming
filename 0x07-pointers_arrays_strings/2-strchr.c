#include"main.h"

/**
 * _strchr - locates a character in a string,
 * @s: string input
 * @c: to lacate from
 *
 * Return: first char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *s(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
