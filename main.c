#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int alen, elen;
	int len, len2;

	// NULL
	printf(NULL);
	_printf(NULL);
	printf("START OF TEST\n");

	int res = 0;

	//print SSSS
	printf("=====================\n");
	printf("*****PRINT S*****\n");
	printf("=====================\n");
	res = _printf("hola %S HOLA\n", NULL);
	printf("%d\n", res);
	_printf("\n%S\n", "looool\nlol");
	printf("=====================\n");
	_printf("\n%S\n", "looool\tlol");
	printf("=====================\n");

	//hexadecimal
	printf("*****HEXA*****\n");
	printf("=====================\n");
	int e = printf("\n%x, %X\n", (INT_MAX * (-1)), (INT_MAX * (-1)));
	int f = _printf("\n%x, %X\n", (INT_MAX * (-1)), (INT_MAX * (-1)));
	printf("Expected   : %d\n", e);
	printf("Actual     : %d\n", f);
	e = printf("\nExpected   : %x, %X\n", 20, 20);
	f = _printf("\nActual     : %x, %X\n", 20, 20);
	printf("Expected   : %d\n", e);
	printf("Actual     : %d\n", f);
	e = printf("\nExpected   : %x, %X\n", INT_MAX, INT_MAX);
	f = _printf("\nActual     : %x, %X\n", INT_MAX, INT_MAX);
	printf("Expected   : %d\n", e);
	printf("Actual     : %d\n", f);
	for (int g = 0; g < 21; g++)
	{
		printf("\nExpected   : %x, %X\n", g, g);
		_printf("\nActual     : %x, %X\n", g, g);
	}

	//binario
	printf("=====================\n");
	printf("*****BINARIO*****\n");
	printf("=====================\n");
	res = _printf("%b\n", 77);
	printf("lenght binario %d\n", res);

	//octal
	printf("=====================\n");
	printf("*****OCTAL*****\n");
	printf("=====================\n");
	int a = printf("\n%o\n", (INT_MAX * (-1)));
	int b = _printf("\n%o\n", (INT_MAX * (-1)));
	printf("%d\n", a);
	printf("%d\n", b);
	printf("positivos\n");
	a = printf("\n%o\n", INT_MAX);
	b = _printf("\n%o\n", INT_MAX);
	printf("%d\n", a);
	printf("%d\n", b);
	a = printf("\n%o\n", 8);
	b = _printf("\n%o\n", 8);
	printf("%d\n", a);
	printf("%d\n", b);
	a = printf("\n%o\n", 123456);
	b = _printf("\n%o\n", 123456);
	printf("%d\n", a);
	printf("%d\n", b);

	char c = 'z';
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c\n", '\0');
	_printf("Actual     : %c\n", '\0');
	printf("Expected   : %%%c\n", 'y');
	_printf("Actual     : %%%c\n", 'y');

	//strings
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	char *str = "hello, %world";
	alen = elen = 0;
	printf("Expected   : %world\n");
	_printf("Actual     : %world\n");
	printf("Expected   : %\n%");
	_printf("Actual     : %\n%");
	printf("Expected   : %\n");
	_printf("Actual     : %\n");
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	len = printf("Expected   : %s$\n", NULL);
	len2 = _printf("Actual     : %s$\n", NULL);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("%", NULL);
	alen = _printf("%", NULL);
	printf("Expected casot  : %i\n", elen);
	_printf("Actual casot    : %i\n", alen);
	printf("Expected   : %i\n", len);
	_printf("Actual     : %i\n", len2);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");

	//%%
	alen = elen = 0;
	printf("=====================\n");
	printf("*****PERCENT*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %%\n");
	alen = _printf("Actual     : %%\n");
	printf("Expected   : %i\n", alen);
	_printf("Actual     : %i\n", elen);
	elen = printf("Expected   : %%%%\n");
	alen = _printf("Actual     : %%%%\n");
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   :");
	printf("%");
	printf("\n");
	printf("Actual     :");
	_printf("%");
	_printf("\n");

	//i
	printf("=====================\n");
	printf("*****INTEGER*****\n");
	printf("=====================\n");
	alen = elen = 0;
	int p = 237482;
	int n = -328472;
	int z = 0;
	elen = printf("Expected   : %i\n", p);
	alen = _printf("Actual     : %i\n", p);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", n);
	alen = _printf("Actual     : %i\n", n);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", INT_MAX);
	_printf("Actual     : %i\n", INT_MAX);
	printf("Expected   : %i\n", INT_MIN);
	_printf("Actual     : %i\n", INT_MIN);

	//d
	printf("=====================\n");
	printf("*****DECIMAL*****\n");
	printf("=====================\n");
	alen = elen = 0;
	p = 1134001;
	n = -4567;
	z = 0;
	elen = printf("Expected   : %d\n", p);
	alen = _printf("Actual     : %d\n", p);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %d\n", n);
	alen = _printf("Actual     : %d\n", n);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %d\n", INT_MAX);
	_printf("Actual     : %d\n", INT_MAX);
	printf("Expected   : %d\n", INT_MIN);
	_printf("Actual     : %d\n", INT_MIN);

	//REVERSE
	printf("=====================\n");
	printf("*****REVERSE*****\n");
	printf("=====================\n");
	char *str2 = "hello, world";
	alen = elen = 0;
	_printf("Actual     : %r\n", "holberton");
	_printf("Actual     : %r$\n", "");
	alen = _printf("Actual     : %r\n", str2);
	len2 = _printf("Actual     : %r$\n", NULL);
	_printf("Actual     : %i\n", alen);
	_printf("Actual casot    : %i\n", alen);
	_printf("Actual     : %i\n", len2);
	printf("Expected   : %rschool\n", "holberton");
	_printf("Actual     : %rschool\n", "holberton");

	//ROT13
	printf("=====================\n");
	printf("*****ROT13*****\n");
	printf("=====================\n");
	char *str3 = "hello, world";
	alen = elen = 0;
	_printf("Actual     : %R\n", "holberton");
	_printf("Actual     : %R$\n", "");
	alen = _printf("Actual     : %R\n", str3);
	len2 = _printf("Actual     : %R$\n", NULL);
	_printf("Actual     : %i\n", alen);
	_printf("Actual casot    : %i\n", alen);
	_printf("Actual     : %i\n", len2);
	printf("Expected   : %Rschool\n", "holberton");
	_printf("Actual     : %Rschool\n", "holberton");

	//u
	printf("=====================\n");
	printf("*****UNSIGNED*****\n");
	printf("=====================\n");
	unsigned int uelen = 0;
	unsigned int ualen = 0;
	unsigned int m = 113342421;
	z = 0;
	elen = printf("Expected   : %u\n", m);
	alen = _printf("Actual     : %u\n", m);
	printf("Expected   : %u\n", elen);
	_printf("Actual     : %u\n", alen);
	uelen = printf("Expected   : %u\n", z);
	ualen = _printf("Actual     : %u\n", z);
	printf("Expected   : %u\n", uelen);
	_printf("Actual     : %u\n", ualen);
	printf("Expected   : %u\n", z);
	_printf("Actual     : %u\n", z);
	printf("Expected   : %u\n", -5);
	_printf("Actual     : %u\n", -5);
	printf("Expected   : %u\n", UINT_MAX);
	_printf("Actual     : %u\n", UINT_MAX);
	printf("Expected   : %u\n", INT_MAX);
	_printf("Actual     : %u\n", INT_MAX);
	printf("Expected   : %u\n", 1);
	_printf("Actual     : %u\n", 1);
	printf("Expected   : %u\n", INT_MIN);
	_printf("Actual     : %u\n", INT_MIN);
	printf("=====================\n");

	//combos
	printf("Expected   : %u, %i, %c, %d, %s\n", INT_MIN, 324, 'g', 32, "hello");
	_printf("Expected   : %u, %i, %c, %d, %s\n", INT_MIN, 324, 'g', 32, "hello");

	return(0);
}
