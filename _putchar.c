#include "main.h"

/**
 * _putchar - prints a string
 * @c: pointer to string to print
 * Return: string
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
