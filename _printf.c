#include "main.h"

/**
 * _printf - prints characters
 * @format: array of argument types to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);


	va_end(valist);
	return (count);
}
