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
<<<<<<< HEAD
	int i;
	char *strng;
	va_list list;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
=======
	va_list args;
	int i;

	va_start(args, format);
	i = 0;
	while (format[i])
>>>>>>> fa95ba13eb6bace539a6a1c1c123a61c7c90bc36
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
<<<<<<< HEAD
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
=======
			case 'c':
				_putc(va_arg(args, int));
				break;
			case 's':
				_puts(va_arg(args, const char *));
				break;
			case 'd':
				_putc(va_arg(args, int));
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
>>>>>>> fa95ba13eb6bace539a6a1c1c123a61c7c90bc36
