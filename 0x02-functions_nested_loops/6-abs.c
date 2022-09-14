#include"main.h"

/**
 * _abs -function that computes the absolute value of an integer
 *
 * @n: takes the inter type input of a function
 *
 * Return: 0 always
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
