#include "main.h"

int (*get_specifier(char *c))(va_list ptlist)
{
dt ar[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percentage},
	{NULL, NULL}
};
int i = 0;


while (ar[i].ch)
{
	if (*c == ar[i].ch[0])
	{
		return (ar[i].f);
	}
	i++;
}
return (NULL);
}
int get_print_func(char *c, va_list ptlist)
{
int (*f)(va_list ptlist) = get_specifier(c);

if (f)
	return (f(ptlist));
return (0);
}
