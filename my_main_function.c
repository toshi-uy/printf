#include "holberton.h"
#include "print_data_t_2.c"
#include "print_data_t_1.c"
#include "func_handlers_2.c"
#include "func_handlers_1.c"
#include "aux_funcs.c"


int _printf(const char *format, ...)
{
	data_t type[] = {
		{"c", print_char},
		{"s", print_char_2},
		{"d", print_int},
		{"i", print_int},
		{"b", print_to_binar},
		{"%", print_percent},
		{"u", print_uns},
		{"o", print_octal},
		{"x", print_hexa_low},
		{"X", print_hexa_upper},
		{"S", print_str_non_print},
		{NULL, NULL},
	};

	int indx_type, iter = 0, pos1 = 0, pos2, count = 0;
	va_list list;
	
	va_start(list, format);

	while (format && format[iter])
	{
		while (format[iter] && format[iter] != '%')
			iter++;
		pos2 = iter - 1;
		print_str(pos1, pos2, format);
		count += pos2 - pos1 + 1;
		if (format[iter])
		{
			pos1 = pos2 + 3;  /*need to acomodate pos2, when its more than 1 directive after %*/
			indx_type = 0;
			iter++;
			while (type[indx_type].type)
			{
				if (*type[indx_type].type == format[iter])
					count += type[indx_type].func(list);
			indx_type++;
			}
		}
		else
			break;
		iter++;
	}
	va_end(list);
	return (count);
}
/*
int main()
{

    char ch = 'a';
    char *str;
    char *str2;
    str2 = "wopa";
    str = "Hola";
	int aux = _printf("A%cB%sC%sD8\n", ch, str, str2);
	printf ("\n");
    printf("%d", aux);
	printf ("\n");
	int aux2 = _printf("alo98");
	printf ("\n");
    printf("%d", aux2);
	printf ("\n");
	int aux3 = _printf("aguada%c%s%s", ch, str, str2);
	printf ("\n");
    printf("%d", aux3);
	printf ("\n");

    return (0);
}
*/
