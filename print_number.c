#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: int
 */
int print_number(int n)
{
	unsigned int n1;
	int i = 0;

	if (n < 0)
	{
		n1 = -n;
		i += _putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		i += print_number(n1 / 10);
	}
	i += _putchar((n1 % 10) + '0');
	return (i);
}
