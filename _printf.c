#include "holberton.h"

/**
 * make_struct - produces output according to a format.
 * @a: formats input.
 * Return: lenght of format.
 */
void make_struct(prfor_t *a)
{
	prfor_t form_get[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_number},
		{"d", print_number},
		{"b", print_binary},
		{"R", print_string_rot},
		{NULL, NULL}
	};
	a = form_get;
}
/**
 * _printf - produces output according to a format.
 * @format: formats input.
 * Return: lenght of format.
 */

int _printf(const char * const format, ...)
{
	prfor_t *form_get;
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
		length++;
	}
	va_end(argu);
	return (lenght);
}
