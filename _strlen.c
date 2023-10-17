#include "main.h"
/**
 * _strlen - a function that calculate the lenght of the string.
 * @s: char as parameter
 * Return: returns character count.
 */
int _strlen(char *s)
{
int x;
while (s[x] != 0)
x++;
return (x);
}
