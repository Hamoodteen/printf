#include "main.h"

/**
 * _printf - f
 * @format: char
 * @...: args
 * Return: int
*/
int _printf(const char *format, ...)
{
	_putchar('c');

	return (strlen(format));
}
int main(void)
{
	_putchar('c');
	return (0);
}