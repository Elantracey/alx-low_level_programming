#include "holberton.h"

/**
 *  _strncpy - function to a string
 * *@dest: pointer to the first string we want to change
 * *@src: pointer for the second string
 * @n: number of bytes
 * Return: pointer to the first string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
