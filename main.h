#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1
#define NULL_STRING "(null)"
int _putchar(int c);
int _puts(char *str);
/**
 * struct data - Data structure to map format specifiers to functions
 * @ch: The format specifier
 * @f: A pointer to the corresponding function
 */
typedef struct data
{
char *ch;
int (*f)(va_list ptlist);
} dt;
int print_char(va_list ptlist);
int print_string(va_list ptlist);
int print_percentage(va_list ptlist);
int print_int(va_list ptlist);
int print_start_stop(char *start, char *stop);
int get_print_func(char *c, va_list ptlist);
int (*get_specifier(char *c))(va_list ptlist);

int _printf(const char *format, ...);
#endif
