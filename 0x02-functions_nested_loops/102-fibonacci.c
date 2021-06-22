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
	int fib1 = 1, fib2 = 2, fib3, 50, count = 0;

	printf("%d\n", fib1);
	printf("%d\n", fib2);
	count = 2;
	while (count < 50)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%d\n", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
}
