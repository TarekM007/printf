#include "main.h"

/**
 * printf_string - a functions that prints a string.
 * @st: argument as input.
 * Return: the length of the string.
 */
int printf_string(va_list st)
{
char *s;
int i, len;

s = va_arg(st, char *);
if (s == NULL)
{
s = "(null)";
len = _strlen(s);
for (i = 0; i < len; i++)
_putchar(s[i]);
return (len);
}
else
{
len = _strlen(s);
for (i = 0; i < len; i++)
_putchar(s[i]);
return (len);
}
}
