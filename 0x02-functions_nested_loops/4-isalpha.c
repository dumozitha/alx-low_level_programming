#include"main.h"

/**
 * _isalpha - check if carrecter is lower or upper
 *
 * @c: takes input from other functions
 *
 * Return: 1 if c is true or else 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && 
			c >= 65 && c >= 90)
		return (1);
	return (0);
}
