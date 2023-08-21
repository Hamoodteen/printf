#include "main.h"
/**
 * octal - f
 * @n: int
 * Return: oct
*/
long int octal(unsigned long int n)
{
	unsigned long int oct = 0;
	unsigned long int f = 1;
	unsigned long int rem;

	while (n != 0)
	{
		rem = n % 8;
		oct += (rem * f);
		n /= 8;
		f *= 10;
	}
	return (oct);
}
