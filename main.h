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
int _printf(const char *format, ...);
int _strlen(const char *s);
int print_number(long int n);
long int octal(long int n);
long int binary(unsigned long int n);

#endif
