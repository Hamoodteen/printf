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
	va_list list;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(list, int));
					break;
				case 's':
					_puts(va_arg(list, char *));
					break;
				case '%':
					_putchar('%');
					break;
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(list);

	return (_strlen(format));
}
int main(void)
{
	char l = 'b';
	char *str;
	str = "bbb";

	_printf("s%casa\n", l);
	_printf("s%sasa", str);

	return (0);
}
