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
	_puts(format);
	return (strlen(format));
}
