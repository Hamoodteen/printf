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

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
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
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.hhh\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Character:[%c]hhh\n", 'H');
    printf("Character:[%c]\n\n", 'H');

    _printf("String:[%s]hhh\n");
    printf("String:[%s]\n\n");

    len = _printf("Percent:[%%]hhh\n");
    len2 = printf("Percent:[%%]\n");

    _printf("Len:[%d]hhh\n", len);
    printf("Len:[%d]\n", len2);



    return (0);
}