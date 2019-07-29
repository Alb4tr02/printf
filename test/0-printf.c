#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_s_c - produces output according to a format, case string and char
 * @format: formats input.
 */

int print_s_c(const char * const format, ...)
{
	prfor_t form_get[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j, lenght;
	va_list argu;

	va_start(argu, format);
	lenght = _strlen((char *)format);
	for (i = 0; format != NULL && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			i++;
			j = 0;
			for (; j < 2; j++)
			{
				if (form_get[j].form[0] == format[i])
				{
					(form_get[j].f(argu));
					break;
				}
			}
		}
	}
	va_end(argu);
	return (lenght);
}
/**
 * print_char - function that prints characters.
 * @va: arguments.
 */
void print_char(va_list va)
{
	int c;

	c = va_arg(va, int);
	_putchar(c);
}

/**
 * print_string - function that prints stings.
 * @va: arguments.
 */
void print_string(va_list va)
{
	char *s;
	char nu[] = "(null)";
	int i;

	s = va_arg(va, char *);
	if (s == NULL)
	{
		for (i = 0; nu[i] != '\0'; i++)
			_putchar(nu[i]);
		return;
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
