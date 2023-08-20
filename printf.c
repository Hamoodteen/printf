#include "main.h"
#include <stdio.h>
/**
 * _printf - f
 * @format: char
 * @...: args
 * Return: int
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				_putc(va_arg(args, int));
				break;
			case 's':
				_puts(va_arg(args, const char *));
				break;
			case '%':
				;
				break;
			default:
				break;
			}
		}
		else
		{
			_puts(va_arg(args, const char *));
		}
		i++;
	}
	va_end(args);
	return (strlen(format));
}
