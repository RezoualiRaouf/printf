#include "main.h"
/**
 *_puts - prints a string
 *@str: pointes to string
 *Return: int
 */
int _puts(char *str)
{
	char *a = str;
while (*str)
	_putchar(*str++);
return (str - a);/*returns the size of the array that has been printed*/
}
