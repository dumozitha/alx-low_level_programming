#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * main - entry
 * @argc: ..
 * @argv:
 *
 * Return: something
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
