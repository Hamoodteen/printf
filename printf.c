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
	va_end(args);
	_putchar(format[0]);
	return (strlen(format));
}
int main(void)
{
	_printf("sasa");
	return (0);
}