#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
/**
 * struct data - Data structure to map format specifiers to functions
 * @ch: The format specifier
 * @f: A pointer to the corresponding function
 */
typedef struct data
{
char *ch;
void (*f)(va_list ptlist);
} dt;
int _strcmp(char *s1, char *s2);
void print_char(va_list ptlist);
void print_string(va_list ptlist);






int _printf(const char *format, ...);




#endif
