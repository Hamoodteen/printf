#include "main.h"
/**
 * binary - f
 * @n: int
 * Return: int
*/
int binary(int n)
{
	int i;
	int bin = 0;
	int rem;

	for (i = 0; n > 0; i++)
	{
		rem = n % 2;
		n /= 2;
		bin += rem * (1 << i);
	}
	return bin;
}
