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

/**
 * print_int - prints an integer
 * @ptlist: A va_list pointing to the argument.
 * Return: number of bytes
 */
int print_int(va_list ptlist)
{
	long num;
	int sum = 0, temp, divisor;
	char digit;

	num = (int)va_arg(ptlist, int);
	if (num < 0)
	{
		num = -num;
		_putchar('-');
		sum++;
	}
	temp = num;
	do {
		temp /= 10;
		sum++;
	} while (temp != 0);
	divisor = 1;
	while (num / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = (num / divisor) % 10 + '0';
		_putchar(digit);
		divisor /= 10;
	}
	return (sum);
}
