#include "main.h"
/**
 * _printf - a function that prints chars, strings and integers
 * @format: a char parameter
 * Return: returns the number of printed characters
 */
int _printf(const char *format, ...)
{
int i = 0, char_counter = 0;
va_list args;

if (format == NULL)
return (-1);
va_start(args, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
char_counter++; }
else
{
format++;
if (*format == '\0')
break;
if (*format == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
char_counter++; }
else if (*format == 's')
{
char *str = va_arg(args, char*);
while (str[i] != '\0')
i++;
write(1, str, i);
char_counter +=  i; }}
format++; }
va_end(args);
return (char_counter); }
