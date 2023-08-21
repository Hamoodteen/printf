#include "main.h"
/**
 * binary - f
 * @n: int
 * Return: int
*/
int binary(int n)
{
	int f = 1;
	int bin = 0;
	int rem;

	while (n != 0)
	{
		rem = n % 2;
		bin += (rem * f);
		f *= 10;
		n /= 2;
	}
	return bin;
}
