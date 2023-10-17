#include "main.h"
/**
 * print_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
int num, last_digit = n % 10, digit, i = 1, count = 1;
n = n / 10;
num = n;

if (last_digit < 0)
{
_putchar('-');
num = -num;
n = -n;
last_digit = -last_digit;
count++;
}
if (num > 0)
{
while (num / 10 != 0)
{
i = i * 10;
num = num / 10;
}
num = n;
while (i > 0)
{
digit = num / i;
_putchar(digit + '0');
num = num - (digit *i);
i = i / 10;
count++;
}
}
_putchar(last_digit + '0');
return (count);
}
