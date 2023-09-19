#include "main.h"

/**
 * print_char - Print a character.
 * @ptlist: A va_list pointing to the argument.
 * Return: number of bytes
 */
int print_char(va_list ptlist)
{
	char value = va_arg(ptlist, int);
	int sum = 0;

	sum += _putchar(value);
	return (sum);
}

/**
 * print_string - Print a string.
 * @ptlist: A va_list pointing to the argument.
 * Return: number of bytes
 */
int print_string(va_list ptlist)
{
	char *value = va_arg(ptlist, char *);
	int sum = 0;

	if (value == NULL)
		value = NULL_STRING;
	sum += _puts(value);
	return (sum);
}

/**
 * print_percentage - Prints a percentage sign (%).
 * @ptlist: A va_list pointing to the argument list (unused in this case).
 * Return: number of bytes
 */
int print_percentage(va_list ptlist)
{
	(void)ptlist;

	return (_putchar('%'));
}
