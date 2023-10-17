#include "main.h"
/**
 * _putchar - prints a single char
 * @c: char as parameter
 * Return: 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
