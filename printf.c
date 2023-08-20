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
	char *strng;
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
					strng = va_arg(list, char *);
					if (!strng)
						strng = "(nil)";
					_puts(strng);
					break;
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(list);

	return (strlen(format) + 1);
}
/**
 * main - call printf
 *
 * Return: int
*/
int main(void)
{
	char l = 'b';
	char *str;

	str = "bbb";

	_printf("s%casa\n", l);
	_printf("s%sasa", str);

	return (0);
}
