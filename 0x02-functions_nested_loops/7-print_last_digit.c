#include "holberton.h"
/**
 * print the last digit of a number
 *
 * Return: value of the last digit
 */
int print_last_digit(int)
{
	int pld, n;
	pld = (n % 10);
	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
