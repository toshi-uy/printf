#include "holberton.h"
#include "print_data_t_2.c"
#include "prints_data_t_1.c"
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
