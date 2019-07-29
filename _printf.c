#include "holberton.h"

/**
 * _printf - produces output according to a format.
 * @format: formats input.
 * Return: lenght of format.
 */

int _printf(const char * const format, ...)
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
	int i, j, lenght;
	va_list argu;

	va_start(argu, format);
	lenght = 0;
	int find = 0;

	if (format == NULL)
		return (-1);
	for (i = 0; format != NULL && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			lenght++;
		}
		else
		{
			i++;
			j = 0;
			if (format[i] == '%')
			{
				_putchar('%');
				lenght++;
			}
			find = 0;
			for (; j < 6; j++)
			{
				if (form_get[j].form[0] == format[i])
				{
					lenght += (form_get[j].f(argu));
					find = 1;
					break;
				}
			}
			if (!find && format[i] != '%')
			{
				lenght += 2;
				_putchar('%');
				_putchar(format[i]);
			}
		}
	}
	va_end(argu);
	return (lenght);
}
