#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _put(const char *c)
{
	(write(1, c, strlen(c)));
}
/**
 * _printf - f
 * @format: char
 * @...: args
 * Return: int
*/
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	va_end(args);
	_put(format);
	return (strlen(format));
}
int main(void)
{
	_printf("sasa");
	return (0);
}
