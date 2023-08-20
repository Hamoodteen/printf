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
	unsigned int i = 0;

	va_start(args, format);
	va_end(args);
	return (args);
}
