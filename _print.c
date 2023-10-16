#include "main.h"
/**
 * _printf - a function that prints chars, strings and integers
 * @format: a char parameter
 * Return: returns the number of printed characters
 */
int _printf(const char *format, ...)
{
char *str;
int i, count = 0;
va_list args;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
switch (*++format)
{
case 'c':
_putchar(va_arg(args, int));
count++;
break;
case '%':
_putchar('%');
break;
case 's':
str = va_arg(args, char*);
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
count++;
break;
case 'd': case 'i':
print_int(va_arg(args, int));
count++;
break;
default:
_putchar('%');
_putchar(*format);
count++;
break; }}
else
_putchar(*format);
count++;
format++; }
va_end(args);
return (count); }
