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
	a[5].form = "R";
	a[5].f = print_string_rot;
	a[6].form = NULL;
	a[6].f = NULL;
}
/**
 * _printf - produces output according to a format.
 * @format: formats input.
 * Return: lenght of format.
 */

int _printf(const char * const format, ...)
{
	prfor_t form_get[7];
	int i, j, lenght = 0, find = 0;
	va_list argu;

	make_struct(form_get);
	va_start(argu, format);
	if (format == NULL)
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
			for (; j < 6; j++)
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
