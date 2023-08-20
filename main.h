<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H

#include "_putchar.c"
#include "_puts.c"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *c);
=======
#include "_putc.c"
#include <string.h>
#include <stdarg.h>

int _putc(char c);
void _puts(const char *);
>>>>>>> fa95ba13eb6bace539a6a1c1c123a61c7c90bc36
int _printf(const char *format, ...);
