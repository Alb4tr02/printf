#include "holberton.h"

/**
 * make_struct - produces output according to a format.
 * @a: formats input.
 * Return: lenght of format.
 */
void make_struct(prfor_t a[])
{
	a[0].form = "c";
	a[0].f = print_char;
	a[1].form = "s";
	a[1].f = print_string;
	a[2].form = "i";
	a[2].f = print_number;
	a[3].form = "d";
	a[3].f = print_number;
	a[4].form = "b";
	a[4].f = print_binary;
	a[5].form = "r";
	a[5].f = print_string_rev;
	a[6].form = "R";
	a[6].f = print_string_rot;
	a[7].form = "u";
	a[7].f = print_unsigned;
	a[8].form = "o";
	a[8].f = print_octal;
	a[9].form = "x";
	a[9].f = print_hexa;
	a[10].form = "X";
	a[10].f = print_Hexa;
	a[11].form = "S";
	a[11].f = print_String;
	a[12].form = NULL;
	a[12].f = NULL;
}
/**
 * _printf - produces output according to a format.
 * @format: formats input.
 * Return: lenght of format.
 */

int _printf(const char * const format, ...)
{

	prfor_t form_get[13];
	int i, j, lenght = 0, find = 0;
	va_list argu;

	make_struct(form_get);
	va_start(argu, format);
	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);
	for (i = 0; format != NULL && format[i]; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			i++, j = 0;
			if (format[i] == '%')
				_putchar('%');
			find = 0;
			for (; j < 12; j++)
			{
				if (form_get[j].form[0] == format[i])
				{
					lenght += (form_get[j].f(argu)) - 1;
					find = 1;
				}
			}
			if (!find && format[i] != '%')
			{
				lenght++;
				_putchar('%');
				_putchar(format[i]);
			}
		}
		lenght++;
	}
	va_end(argu);
	return (lenght);
}
