#include <stdlib.h>

/**
 * print_name - print a name
 * @name: name
 * @f: pointer to function
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
 	if (f != NULL)
		f(name);
}
