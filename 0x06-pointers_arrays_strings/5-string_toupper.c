#include"main.h"

/**
 * string_toupper - changes lowercase to uppercase
 *
 * @s: pointer to input char 
 *
 * Return: @s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[1] = s[i] - 32;

		i++;
	}
	return (s);
}
