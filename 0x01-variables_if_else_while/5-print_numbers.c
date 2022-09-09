#include<stdio.h>

/**
 * main - program entry
 *
 * Description: program prints all single digit numbers
 *
 * return: 0 always
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");
	return (0);
}
