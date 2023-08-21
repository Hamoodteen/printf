#include "main.h"
/**
 * _putchar - prints a string
 * @c: pointer to string to print
 * Return: string
 */
int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
/**
 * _strlen - do something
 * @s: int or char
 * Return: some thing
 */
int _strlen(const char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
/**
 * _puts - prints a string
 * @c: pointer to string to print
 * Return: string
 */
int _puts(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
	return (i);
}
