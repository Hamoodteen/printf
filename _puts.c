#include <string.h>
#include <unistd.h>

/**
 * _puts - prints a string
 * @c: pointer to string to print
 * Return: string
 */
int _puts(char *c)
{
	return (write(1, &c[0], strlen(c)));
}
