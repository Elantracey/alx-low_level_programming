#include "holberton.h"

/**
 *  _strncat - function to concacenate two strings
 * *@dest: pointer to the first string we want to change
 * *@src: pointer for the second string
 * @n: number of bytes
 * Return: pointer to the first string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
