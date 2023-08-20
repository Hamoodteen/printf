#include "main.h"

/**
 * _printf - f
 * @format: char
 * @...: args
 * Return: int
*/
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	_puts(format);
	va_end(args);
	return (strlen(format));
}
int main(void)
{
	_printf("asd");
	return (0);
}
