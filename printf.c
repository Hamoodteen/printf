#include "main.h"

/**
 * _printf - f
 * @format: char
 * @...: args
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i;
	int len = 0;
	unsigned long int bu;
	long int o;
	char *x;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				len += _putchar(va_arg(list, int));
				break;
			case 's':
				len += _puts(va_arg(list, char *));
				break;
			case '%':
				len += _putchar('%');
				break;
			case 'd':
				len += print_number(va_arg(list, int));
				break;
			case 'i':
				len += print_number(va_arg(list, int));
				break;
			case 'b':
				bu = binary(va_arg(list, unsigned long int));
				len += print_number(bu);
				break;
			case 'u':
				bu = va_arg(list, unsigned int);
				len += print_number(bu);
				break;
			case 'o':
				o = octal(va_arg(list, unsigned long int));
				len += print_number(o);
				break;
			case 'x':
				x = hex(va_arg(list, unsigned long int));
				len += _puts(x);
				break;
			case 'X':
				x = HEX(va_arg(list, unsigned long int));
				len += _puts(x);
				break;
			}
		}
		else
			len += _putchar(format[i]);
	}
	va_end(list);
	return (len);
}
