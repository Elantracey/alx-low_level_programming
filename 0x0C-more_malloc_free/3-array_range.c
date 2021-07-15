#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry point
 *@min: number min
 *@max: number max
 * Return: a pointer to an array
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
