#include "main.h"

/**
 * _strprint - prints a string
 * @str: pointer to string to print
 * Return: none
 */
void _puts(const char *str)
{
	write(1, str, _strlen(str));
}
