#include "main.h"

/**
 * _strprint - prints a string
 * @str: pointer to string to print
 * Return: none
 */
void _strprint(char *str)
{
	write(1, str, _strlen(str));
}
