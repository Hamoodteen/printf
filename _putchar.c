#include <unistd.h>
#include <string.h>

/**
 * _puts - prints a string
 * @str: pointer to string to print
 * Return: none
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _puts(const char *str)
{
	write(1, str, strlen(str));
}
