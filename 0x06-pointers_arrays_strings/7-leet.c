#include"main.h"

/**
 * leet - a functions that encodes a string to 1337
 *
 * @s: string input
 *
 * Retun: @s
 */
char *leet(char *s)
{
	int i, c = 0;
	int sl[] = {97, 101, 11, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == sl[i] || s[c] == ul[i])
			{
				s[c] = n[i];
			break;
			}
		}
		c++;
	}
}
