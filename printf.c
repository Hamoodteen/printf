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
	char *p;
	va_list list;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (!format[i])
		return (0);
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
				len += printf_string(list);
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
			case 'p':
				x = (char *)va_arg(list, void *);
				p = &*x;
				len += _puts(p);
				break;
			}
		}
		else
			len += _putchar(format[i]);
	}
	va_end(list);
	return (len);
}
