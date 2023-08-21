#include "main.h"
/**
 * octal - f
 * @n: int
 * Return: oct
*/
long int octal(long int n)
{
	long int oct = 0;
	long int f = 1;
	long int rem;

	while (n != 0)
	{
		rem = n % 8;
		oct += (rem * f);
		n /= 8;
		f *= 10;
	}
	return (oct);
}
