#include "main.h"

/**
 * p_d - calls function to print a signed integer.
 * @arg: The va_list argument containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int p_id(va_list arg)
{
	int n = va_arg(arg, int);
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		i++;
		n = -n;
	}
	i = print_n(n);
	return (i);
}



/**
 * print_n - Prints a signed integer.
 * @n: The integer to print.
 *
 * Return: The number of characters printed.
 */
int print_n(int n)
{
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		i++;
	}
	else if (n < 0)
	{
		_putchar('-');
		i++;
		n = -n;
	}
	if (n / 10)
	{
		i += print_n(n / 10);
		_putchar((n % 10) + '0');
		i++;
	}
	return (i);
}
