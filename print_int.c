#include "main.h"
/**
 * printf_int - prints integer numbers
 * @args: argument to print
 * Return: number of printed characters
 */
int printf_int(va_list args)
{
int n = va_arg(args, int);
int num, last_digit = n % 10, digit, e = 1;
int  i = 1;

n = n / 10;
num = n;

if (last_digit < 0)
{
_putchar('-');
num = -num;
n = -n;
last_digit = -last_digit;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
e = e * 10;
num = num / 10;
}
num = n;
while (e > 0)
{
digit = num / e;
_putchar(digit + '0');
num = num - (digit * e);
e = e / 10;
i++;
}
}
_putchar(last_digit + '0');

return (i);
}

/**
 * printf_dec - prints decimal numbers
 * @args: argument to print
 * Return: number of printed characters
 */

int printf_dec(va_list args)
{
int n = va_arg(args, int);
int num, last_digit = n % 10, digit;
int  i = 1;
int e = 1;

n = n / 10;
num = n;

if (last_digit < 0)
{
_putchar('-');
num = -num;
n = -n;
last_digit = -last_digit;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
e = e * 10;
num = num / 10;
}
num = n;
while (e > 0)
{
digit = num / e;
_putchar(digit + '0');
num = num - (digit * e);
e = e / 10;
i++;
}
}
_putchar(last_digit + '0');

return (i);
}
