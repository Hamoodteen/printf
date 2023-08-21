#include "main.h"
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
