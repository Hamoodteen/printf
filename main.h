#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int _puts(char *c);
int printf_string(va_list val);
int _printf(const char *format, ...);
int _strlen(const char *s);
int print_number(long int n);
long int octal(unsigned long int n);
int print_binary(unsigned int n);
char *rev(char *str);
char *hex(unsigned int n);
char *HEX(unsigned int n);
int print_rev(char *s);

#endif
