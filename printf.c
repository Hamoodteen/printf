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


    len2 = printf("Let's try to printf a simple sentence.\n");
    len = _printf("Let's try to printf a simple sentence.fff\n");


    printf("Character:[%c]\n", 'H');
    _printf("Character:[%c]fff\n", 'H');

    printf("String:[%s]\n", "I am a string !");
    _printf("String:[%s]fff\n", "I am a string !");

    len2 = printf("Percent:[%%]\n");
    len = _printf("Percent:[%%]fff\n");

    printf("Len:[%d]\n", len2);
    _printf("Len:[%d]fff\n", len);
    return (0);
}

