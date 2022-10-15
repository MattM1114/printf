#include "main.h"
#include <stdarg.h>

/**
 * _printf - is a fuction that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", printf_e}, {"%c", printf_d},
		{"%%", printf_f},
		{"%i", printf_a}, {"%d", printf_dec}, {"%r", printf_k},
		{"%R", printf_rot13}, {"%b", printf_b}, {"%u", printf_unsigned},
		{"%o", printf_i}, {"%x", printf_c}, {"%X", printf_h},
		{"%s", printF_g}, {"%p", printf_j}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
