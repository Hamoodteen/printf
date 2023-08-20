#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: void
 */
void _puts(const char *c)
{
	write(1, c, strlen(c));
}
