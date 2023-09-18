#include "main.h"
/**
 * _printf - Custom printf function to print formatted output.
 * @format: Format string containing format specifiers.
 * @...: Variable number of arguments to be formatted and printed.
 *
 * Return: Number of characters printed (excluding null byte), or -1 on error.
 */
int _printf(const char *format, ...)
{
int i;
va_list ptlist;
dt ar[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percentage}
};
const char *current_format = format;
va_start(ptlist, format);
while (*current_format)
{
	i = 0;
	if (*current_format == '%')
	{
		current_format++;
		while (ar[i].ch)
		{
			if (*ar[i].ch == *current_format)
			{
				ar[i].f(ptlist);
				break;
			}
			i++;
		}
	}
	else
		_putchar(*current_format);

current_format++;
}
va_end(ptlist);
return (0);
}
