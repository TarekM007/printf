#include "main.h"
int _printf(const char *format, ...)
{
int i, count = 0;
va_list args;
va_start(args, format);
if (format == NULL)
return (-1);
while (*format)
{
if (*format == '%')
{
switch (*++format)
{
case '\0': case ' ':
return (-1);
break;
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
{
_putchar(str[i]);
count++;
}
break;
case 'd': case 'i':
print_int(args);
count++;
break;
default:
_putchar('%');
_putchar(*format);
count++;
break;
}
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
