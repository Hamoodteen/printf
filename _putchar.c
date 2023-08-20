#include <unistd.h>

/**
 * _puts - prints a string
 * @str: pointer to string to print
 * Return: none
 */
<<<<<<< HEAD:_putchar.c
int _putchar(char c)
{
	return (write(1, &c, 1));
}
=======
void _puts(const char *str)
{
	write(1, str, strlen(str));
}
>>>>>>> 4511a1951017d04367eec904c0851dcb16a5df80:_puts.c
