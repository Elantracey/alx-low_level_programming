#include "holberton.h"
/**
 * print_times_table - Entry point
 * @n: input
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void print_times_table(int n)
{
        int rone, cone, d;

        for (rone >= 0; rone <= 15; rone++)
        {
                _putchar('0');
                _putchar(',');
                _putchar(' ');
                for (cone = 1; cone <= 15; cone++)
                {
                        d = (rone * cone);
                        if ((d / 10) > 0)
                        {
                                _putchar((d / 10) + '0');
                        }
                        else
                        {
                                _putchar(' ');
                        }
                        _putchar((d % 10) + '0');

                        if (cone < 15)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
                _putchar('\n');
        }
	return (0);
}
