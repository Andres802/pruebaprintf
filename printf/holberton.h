#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 *
 */
typedef struct op
{
	char *data;
	int (*func)(va_list, int b);
} data_t;

int _putchar(char c);
int printfchar(va_list, int count);
int printfstring(va_list, int count);
int _printf(const char *format, ...);
int printf_valid(const char *format);
int (*printf_struct(char s))(va_list, int);

#endif
