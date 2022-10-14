#include "main.h"

/**
 * printf_b - prints a binary number.
 * @list: arguments.
 * Return: 1.
 */
int printf_b(va_list list)
{
	int f = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int p;


