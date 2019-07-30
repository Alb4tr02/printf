#include "holberton.h"

int print_octal(va_list va)
{
	int a = 0;
	int prueba;
	prueba = va_arg(va, int);
	if (prueba >= 0)
		a = print_octal_pos(prueba);
	else
		a = print_octal_neg(prueba);
	return (a);
}
int print_octal_pos(int prueba)
{
	char binary[32];
	int i = 0, flag = 0, p = 0, j = 0, res = 0, cont = 0;
	char h = '0';
	array_binary(prueba, binary);
	if (prueba == 0)
	{
		_putchar('0');
		return (1);
	}
	for (p = 31; p > 2 ; p -= 3)
	{
		flag = 0;
		for (j = 0; j < 3; j++)
		{
			if (binary[p - j] == '1')
				flag = 1;
		}
		if (flag == 0)
			break;
	}

	res += 2 * (binary[0] - '0');
	res += 1 * (binary[1] - '0');
	if (res)
	{
		_putchar(res + '0');
		cont++;
	}
	for (i = p + 3; i <= 31; i += 3)
	{
		res  = 0;
		res += 1 * (binary[i - 0] - '0');
		res += 2 * (binary[i - 1] - '0');
		res += 4 * (binary[i - 2] - '0');
		_putchar(res + '0');
		cont++;
	}
	return (cont);
}
int print_octal_neg(int prueba)
{
	char binary[32];
	int i = 0, flag = 0, p = 0, j = 0, res = 0, cont = 0;
	char h = '0';
	array_binary(prueba, binary);
	for (p = 31; p > 2 ; p -= 3)
	{
		flag = 0;
		for (j = 0; j < 3; j++)
		{
			if (binary[p - j] == '1')
				flag = 1;
		}
		if (flag == 0)
			break;
	}
	if (prueba < 0)
	{
		_putchar('3');
		cont++;
		for (i = 2; i <= 29; i += 3)
		{
			res  = 0;
			res += 1 * (binary[i + 2] - '0');
			res += 2 * (binary[i + 1] - '0');
			res += 4 * (binary[i + 0] - '0');
			_putchar(res + '0');
			cont++;
		}
	}
	return (cont);
}