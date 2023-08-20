#include "main.h"
/**
 * octal - f
 * @n: int
 * @octal: char
 * Return: void
*/
void octal(int n, char *octal)
{
	int i = 0;

	while (n)
	{
	octal[i++] = n % 8 + '0';
	n /= 8;
	}
	octal[i] = '\0';
	reverse(octal);
}
/**
 * reverse - f
 * @str: char
 * Return: void
*/
void reverse(char *str)
{
	int i, j;
	char temp;

	i = 0;
	j = strlen(str) - 1;
	while (i < j)
	{
	temp = str[i];
	str[i] = str[j];
	str[j] = temp;
	i++;
	j--;
	}
}
