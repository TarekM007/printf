#include "main.h"
/**
 * printf_char - prints a char.
 * @c: argument as input.
 * Return: 1.
 */
int printf_char(va_list c)
{
char s;

s = va_arg(c, int);
_putchar(s);
return (1);
}
