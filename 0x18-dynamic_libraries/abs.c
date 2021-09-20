#include "main.h"

/**
 * _abs - Entry point
 *@c: char to check
 * Return: absolute value of a char
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
