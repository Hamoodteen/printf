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
	int len;
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
				break;
			}
		}
		else
			len += _putchar(format[i]);
	}
	va_end(list);
	return (len);
}
int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n");
	printf("String:[%s]\n");

	return (0);
}
