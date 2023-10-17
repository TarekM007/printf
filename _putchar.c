#include "main.h"

/**
 * _putchar - a function that prints a single character
 * @c: a single char as parameter
 * Return: returns character
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
