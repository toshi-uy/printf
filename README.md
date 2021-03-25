# README _printf
<img src="https://blog.techiehunter.org/wp-content/uploads/2018/09/product_16032_product_shot_wide_image.jpg" width=100%>

```` c
    int printf ( const char * format, ... );
````

## Introduction
This is the Readme file for our group project that consists on replicating various aspects of the stdio.h library function [printf()](https://linux.die.net/man/3/printf) which we are calling _printf().
The function write the output under the control of a  _format_ string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of [stdarg(3)](https://man7.org/linux/man-pages/man3/stdarg.3.html)) are converted for output.
       
The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed of zero or more directives: ordinary characters (not **%**), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.  Each conversion specification is introduced by the character **%**, and ends with a _conversion_ _specifier_.
## Conversion specifiers used in _printf()
Specifier | Output | Example
------------ | ------------- |-----------
 **c** | Character | K
 **s** | String of characters | C is Fun!
 **%** | A % followed by another % character will write a single % to the stream| %
  **i** and **d** | Signed decimal integer | 420 
 **b** | Unsigned binary (using same example of number 420) | 110100100
 **u** | Unsigned decimal integer | 420
 **o** | Unsigned octal (using same example of number 420)| 644
 **x** | Unsigned hexadecimal integer (lowercase) | 36264eb
 **X** | Unsigned hexadecimal integer (uppercase) | 36264EB
 **r** | Reversed string | !nuF si C|
 **R** | Rot13 string (usign "C is Fun!") | P vf Sha!
 **S** | Prints the string (Non printable characters (0 < ASCII value < 32 or >= 127)) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters) example: "Cis\nFun!" | Cis\x0AFun!

## Return value

Upon successful return, these function return the number of characters printed (excluding the null byte used to end output to strings). If an output error is encountered, a negative value is returned (-1).
## Tasks
 - -[0] **I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.** 
Write a function that produces output according to a format.

 - Prototype:``int _printf(const char *format, ...);``
 - Returns: the number of characters printed (excluding the null byte used to end output to strings)
 - write output to stdout, the standard output stream
 - format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:

 - ``c`` 
 - ``s`` 
 - ``%``

 -[1] **Education is when you read the fine print. Experience is what you get if you don't**
Handle the following conversion specifiers:
- ``d``
- ``i``
### [Man_3_printf.]
## Functions we use
```` c
int _printf(const char *format, ...); /*base function to handle the string format*/
int print_char(va_list list); /*prints single character c to stdout*/
void _puts(char *str); /*prints a string from a pointer*/
int print_number(int n); /*prints a number*/
int print_number_uns(unsigned int n); /*prints an unsigned number*/
int print_char_2(va_list list); /*prints string of chars*/
int print_int(va_list list); /*identify an int*/
int print_to_binar(va_list list); /*converts an number to binary code*/
int print_percent(va_list list); /*prints the '%' character*/
int print_uns(va_list list); /*identifies an unsigned integrer*/
int print_octal(va_list list); /*converts an number to octal(base 8)*/
int print_hexa_low(va_list list); /*converts an number to hexadecimal(base 13) in lowercase*/
int print_hexa_upper(va_list list) /*converts an number to hexadecimal(base 13) in uppercase*/;
int print_str_non_print(va_list list); /*Prints the string (Non printable characters (0 < ASCII value < 32 or >= 127)) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)*/
int _strlen(char *); /*counts the length of a string*/
int print_str_rev(va_list list); /*prints a string in reverse*/
int _putchar(char c); /*function that prints single character with write*/
int num_lenght(int n); /*calculates the length of a number*/
int num_lenght_uns(unsigned int n); /*calculates the length of an unsigned number*/
int print_rot13(va_list list); /*converts string using the rot13 encoding format*/
````

## Compilation
All of the  `.c`  files along with a main.c file are to be compiled with  `gcc 4.8.4`  on Ubuntu 14.04 LTS with the flags  `-Wall Werror`  `-Westra`  and  `-pedantic.`

The files will be compiled this way:

-   `gcc -Wall -Werror -Wextra -pedantic *.c`
### Use
````c
#include "holberton.h"
/**
 * main - main function of program
 * Return: always 0
 */
int main(void)
{
	int num;
	char *string;
	
	num = 402;
	string = "Hello, Holberon!"
	_printf("sting: %s, number: %i.\n", string, num);
	return (0);
}
````
````c
$  gcc -Wall -Werror -Wextra -pedantic *.c -o print_program
$  ./_printf
string: Hello, Holberton, number: 402.
$
````
## Examples
````c
_printf("Hello World!\n");
````
output: Hello World!
````c
_printf("Hello %s!\n", "World");
````
output: Hello World!
````c
_printf("My name is %s, I'm %d years old.\n", "John", 30);
````
output: My name is John, I'm 30 years old.
````c
_printf("%r\n", "Hello World");
````
output: dlroW olleH
````c
_printf("To print a porcentage: %%\n");
````
output: To print a porcentage: %
````c
int i = 120;
_printf("Computers can read this: %b\n", i);
````
output: Computers can read this: 1111000

## WorkFlow
Understanding the code is very important, that's why we produced this workflow in order to see clearly how the main function of our _printf() works.

<img src="https://github.com/toshi-uy/holbertonschool-low_level_programming/blob/main/code2flow_LCQAa7.png?raw=true">

## Group

[**Francisco Calixto**](https://github.com/Francisco-Calixto-HolbertonSchool)
[**Toshi Borgia**](https://github.com/toshi-uy)
