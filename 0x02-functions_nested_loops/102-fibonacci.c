#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%1d, %1d", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %1d", fn);
		n1 = n2;
		n2 = fn;
	}
	print("\n");
	return (0);
}
