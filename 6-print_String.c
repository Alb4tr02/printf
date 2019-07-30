#include "holberton.h"
/**
 * print_String - function that prints stings.
 * @va: arguments.
 * Return: lenght of string.
 */
int print_String(va_list va)
{
	char *s;
	char nu[] = "(null)";
	int i, lenght, cont = 0;

	s = va_arg(va, char *);
	if (s == NULL)
	{
		for (i = 0; nu[i] != '\0'; i++)
			_putchar(nu[i]);
		return (6);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
		{
			cont += 4;
			_putchar(92);
			_putchar('x');
			hex_print(s[i]);
		}
		else
		{
			_putchar(s[i]);
			cont++;
		}
	}
	return (cont);
}
void hex_print(char s)
{
	unsigned char p = 255;
	p = (p & s);
	
}
