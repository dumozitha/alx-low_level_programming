#include<stdio.h>
#include<unistd.h>

/**
 * main -this wll create a write function
 *
 * Return: always 1 (error)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
