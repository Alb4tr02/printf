#include "holberton.h"
/**
 * print_number - print an int numbers.
 * @va: number tested
 * Return: Always 0.
 */
int print_unsigned(va_list va)
{
	int dig = 0, tend = 1, iter = 1;
	long int numch, num, n;
	int lenght;

	lenght = 0;
	n = va_arg(va, unsigned int);
	num = n;

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
		numch = (n / tend) % 10;
		_putchar(numch + '0');
		lenght++;
		tend /= 10;
	}
	return (lenght);
}
