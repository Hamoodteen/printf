#include "main.h"
/**
 * print_number - f
 * @n: int
 * Return: int
*/
int print_number(int n)
{
	int divisor;
	int tmp;
	int cnt = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		cnt++;
	}
	divisor = 1;
	tmp = n;
	while (tmp / 10 > 0)
	{
		divisor *= 10;
		tmp /= 10;
		cnt++;
	}
	while (divisor > 0)
	{
		_putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
	}
	return (cnt);
}
