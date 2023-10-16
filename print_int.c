#include "main.h"
/**
 * print_int - a function that prints int number
 * @num: an int parameter
 * Return: returns the number of printed characters
 */
int print_int(int num)
{
char buffer[80];
int Length = sprintf(buffer, "%d", num);
write(1, buffer, Length);
return (Length);
}
