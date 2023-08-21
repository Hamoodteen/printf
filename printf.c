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
	char *j;
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
			case 'p':
				j = (char *)va_arg(list, void *);
				p = &*j;
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
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}