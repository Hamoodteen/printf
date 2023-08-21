#include "main.h"
/**
 * binary - f
 * @n: int
 * Return: bin
*/
long int binary(unsigned long int n)
{
	unsigned long int bin = 0;
	unsigned long int f = 1;
	unsigned long int rem;

	while (n != 0)
	{
		rem = n % 2;
		bin += (rem * f);
		f *= 10;
		n /= 2;
	}
	return (bin);
}
