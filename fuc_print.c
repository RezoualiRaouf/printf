#include "main.h"

int print_start_stop(char *start, char *stop)
{
int sum = 0;

while(start <= stop)
{
	sum += _putchar(*start);
	start++;
}
return (sum);
}
