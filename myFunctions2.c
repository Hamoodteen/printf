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

/**
 * rev - f
 * @str: char
 * Return: str
*/
char *rev(char *str)
{
	int i;
	int j;
	char temp;

	for	(i = 0, j = _strlen(str) - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return (str);
}
/**
 * hex - f
 * @n: int
 * Return: char
*/
char *hex(unsigned int n)
{
	char *x;
	int i;
	int rem;

	x = malloc(sizeof(char) * 10);
	for (i = 0; n > 0; i++)
	{
		rem = n % 16;
		x[i] = rem + '0';
		if (rem > 9)
		{
			x[i] = rem - 10 + 'a';
		}
		n /= 16;
	}
	x[i] = '\0';
	return (rev(x));
}
/**
 * HEX - f
 * @n: int
 * Return: char
*/
char *HEX(unsigned int n)
{
	char *x;
	int i;
	int rem;

	x = malloc(sizeof(char) * 10);
	for (i = 0; n > 0; i++)
	{
		rem = n % 16;
		x[i] = rem + '0';
		if (rem > 9)
		{
			x[i] = rem - 10 + 'A';
		}
		n /= 16;
	}
	x[i] = '\0';
	return (rev(x));
}

/**
 * binary - f
 * @n: int
 * Return: bin
*/
int print_binary(unsigned int n)
{
	unsigned int bin = 0;
	unsigned int f = 1;
	unsigned int rem;
	unsigned int count = 0;

	if (n == 0)
	{
		print_number(0);
		return (1);
	}

	while (n != 0)
	{
		rem = n % 2;
		bin += (rem * f);
		f *= 10;
		n /= 2;
		count++;
	}
	print_number(bin);

	return (count);
}
