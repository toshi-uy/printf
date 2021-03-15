
#ifndef prinf_function
#define prinf_function

#include <limits.h>
#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

void print_str(int pos1, int pos2, const char *format);
void _puts(char *str);
int print_number(int n);
int change_to_binary(int k);
int print_number_uns(unsigned int n);

int print_char(va_list list);
int print_char_2(va_list list);
int print_int(va_list list);
int print_to_binar(va_list list);
int print_percent(va_list list);

int print_uns(va_list list);
int print_octal(va_list list);
int print_hexa_low(va_list list);
int print_hexa_upper(va_list list);
int print_str_non_print(va_list list);


int _putchar(char);
int num_lenght(int n);
int num_lenght_uns(unsigned int n);



typedef struct datatype
{
	char *type;
	int (*func)(va_list list);
} data_t;


#endif
