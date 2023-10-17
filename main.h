#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @sp: a char pointer of the specifier
 * @f: a pointer to function for the conversion specifier
 *
 */

typedef struct format
{
char *sp;
int (*f)();
} select_func;

int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int printf_amp(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
