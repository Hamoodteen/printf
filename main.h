#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int _puts(char *c);
int _printf(const char *format, ...);
int _strlen(const char *s);
int print_number(int n);
void octal(int n, char *octal);
void reverse(char *str);
int binary(int n);

#endif
