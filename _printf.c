#include "main.h"
/**
 * _printf - a function that prints.
 * @format: char as parameter.
 * Return: length of the string.
 */
int _printf(const char * const format, ...)
{
select_func arr[] = {
{"%s", printf_string}, {"%c", printf_char},
{"%%", printf_amp},
{"%i", printf_int}, {"%d", printf_dec}
};

va_list args;
int i = 0, j, count = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
while (format[i] != '\0')
{
j = 4;
while (j >= 0)
{
if (arr[j].sp[0] == format[i] && arr[j].sp[1] == format[i + 1])
{
count += arr[j].f(args);
i = i + 2;
goto Here; }
j--; }
_putchar(format[i]);
count++;
i++; }
va_end(args);
return (count); }
