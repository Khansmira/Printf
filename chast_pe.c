#include "main.h"

/**
 * cha - prints char character(s)
 * @arg: argument
 *
 * Return: character(s) printed (always 1)
 */
int cha(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}


/**
 * pe - prints percentage (%)
 * @arg: argument
 *
 * Return: character
 */
int pe(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}


/**
 * st - function prints string
 * @arg: argument
 *
 * Return: number of characters printed
 */
int st(va_list arg)
{
	int len = 0;
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}

	return (len);
}

