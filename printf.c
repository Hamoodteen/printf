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
	int i;
	int ret;

	va_start(args, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%') {
			i++;
			switch (format[i]) {
			case 'c':
				ret += _putchar(va_arg(args, int));
				break;
			case 's':
				ret += _puts(va_arg(args, const char *));
				break;
			default:
				break;
			}
		}
		else
		{
			ret += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (ret);
}
