#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int cha(va_list arg);
int pe(va_list arg);
int st(va_list arg);
int print_n(int n);
int p_id(va_list arg);




/**
 * Struct representing the conversion specifier and its corresponding print function
 */
typedef struct print_data
{
    char *specifier;
    int (*print_function)(va_list);
} print_data;



#endif /* MAIN_H */
