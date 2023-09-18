#include "main.h"
/**
 * _strcmp - compare two strigs.
 *@s1: points to the first string.
 *@s2: points to the second string.
 *Return: integer positive if s1 > s2, negative if s1 < s2 , 0 if s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, sum = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] > s2[i])
	{
		sum = s1[i] - s2[i];
		break;
	}
	else if (s1[i] < s2[i])
	{
		sum = -(s2[i] - s1[i]);
		break;
	}
	else
	{
		sum = 0;
		i++;
	}
}
return (sum);
}
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
	int i = 0;
char *value = va_arg(ptlist, char *);
if (value == NULL)
	value = "(null)";
while (value[i] != '\0')
{
	_putchar(value[i]);
	i++;
}
}
