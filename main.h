#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <strings.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_string(char *string, int length);
int _putchar(char c);
#endif
