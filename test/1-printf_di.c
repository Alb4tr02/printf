#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_i_d - produces output according to a format, int and digit
 * @format: formats input.
 */

int print_i_d(const char * const format, ...)
{
	prfor_t form_get[] = {
		{"i", print_number},
		{"d", print_number},
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
 * print_number - print an int numbers.
 * @va: number tested
 * Return: Always 0.
 */
void print_number(va_list va)
{
	int dig = 0, tend = 1, iter = 1, n;
	unsigned int abs, numch, num;

	n = va_arg(va, int);
	abs = n;

	if (n < 0)
	{
		_putchar('-');
		abs = -n;
	}
	else
	{
		abs = n;
	}
	num = abs;

	while (num > 0)
	{
		num /= 10;
		dig++;
	}
	while (iter < dig)
	{
		tend *= 10;
		iter++;
	}
	while (tend >= 1)
	{
		numch = (abs / tend) % 10;
		_putchar(numch + '0');
		tend /= 10;
	}
}
