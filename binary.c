#include "main.h"
/**
 * binary - f
 * @n: int
 * Return: int
*/
long int binary(long int n)
{
	long int f = 1;
	long int bin = 0;
	long int rem;

	while (n != 0)
	{
		rem = n % 2;
		bin += (rem * f);
		f *= 10;
		n /= 2;
	}
	return (bin);
}
