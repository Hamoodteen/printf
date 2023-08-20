#include "main.h"

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
	return (write(1, &c[0], _strlen(c)));
}
