#include "main.h"

/**
 * _printf - Custom printf function to print formatted output.
 * @format: Format string containing format specifiers.
 * @...: Variable number of arguments to be formatted and printed.
 * Return: Number of characters printed (excluding null byte), or -1 on error.
 */
int _printf(const char *format, ...)
{
	int sum = 0;
	va_list ptlist;
	char *p, *start;

	va_start(ptlist, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = (char *)format ; *p ; p++)
	{
		if (*p != '%')
		{
			sum += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		if (!get_specifier(p))
			sum += print_start_stop(start, p);
		else
			sum += get_print_func(p, ptlist);
	}
	_putchar(BUF_FLUSH);
	va_end(ptlist);
	return (sum);
}
