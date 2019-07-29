#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_i_d - produces output according to a format, int and digit
 * @format: formats input.
 */

int print_b(const char * const format, ...)
{
	prfor_t form_get[] = {
		{"b", print_binary},
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
 * print_binary - print to binary.
 * @va: number tested.
 */
void print_binary(va_list va)
{
	int flag = 0;
        int i = 0;
        int a = 1;
        int prueba = va_arg(va, int);

        for (; i < 32; i++)
        {
                unsigned int p = ((a<<(31 - i)) & prueba);
                if(p>>(31 - i))
                        flag = 1;
                if (flag)
		{
			int b = p>>(31 - i);
                        _putchar(b + 48);
		}
        }
}
