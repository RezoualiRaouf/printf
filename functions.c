#include "main.h"
/**
 * print_char - Print a character.
 * @ptlist: A va_list pointing to the argument.
 */

void print_char(va_list ptlist)
{
char value = va_arg(ptlist, int);
_putchar(value);
}

/**
 * print_string - Print a string.
 * @ptlist: A va_list pointing to the argument.
 */

void print_string(va_list ptlist)
{
char *value = va_arg(ptlist, char *);
if (value == NULL)
	value = "(null)";
_puts(value);
}

/**
 * print_percentage - Prints a percentage sign (%).
 * @ptlist: A va_list pointing to the argument list (unused in this case).
 */

void print_percentage(va_list ptlist)
{
(void)ptlist;
_putchar('%');
}
