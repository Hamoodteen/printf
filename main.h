#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include "_putchar.c"
#include <string.h>
#include <stdarg.h>

int _putchar(char c);
void _puts(const char *);
int _printf(const char *format, ...);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string
 * @str: pointer to string to print
 * Return: void
 */
void _puts(const char *str)
{
	write(1, str, strlen(str));
}
#endif
