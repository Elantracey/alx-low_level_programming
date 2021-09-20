#include "main.h"

/**
 * _puts - Entry point
 * @str: pointer the sstring we want to print
 *Return: no return
 */
void _puts(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
