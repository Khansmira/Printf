#include "main.h"

/**
 * _printf - custom function to replicate printf
 * @format: format to be printed.
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, j;
	int nfc = 0;
	print_data data[] = {
		{"c", cha},
		{"s", st},
		{"%", pe},
		{"d", pd},
		{"i", pi},
		{NULL, NULL}
	};
	va_start(arg, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
		}
		if (format[i] == '\0')
		{
			return (-1);
		}
		if (format[i] == '%')
		{
			_putchar(format[i]);
			nfc++;
		}
		else
		{
			for (j = 0; j < 5; j++)
			{
				if (format[i] == *(data[j].specifier))
					break;
			}
			if (j < 5)
			{
				nfc = nfc + data[j].print_function(arg);
				i++;
			}
			else
			{
				_putchar(format[i]);
				nfc++;
			}
		}
	}
	va_end(arg);
	return (nfc);
}
