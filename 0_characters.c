#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - prints arguments
 * @format: identifiers
 * @...: more arguments
 * Return: an integer value
 */

int _printf(const char *format, ...)
{
	int written;
	va_list args;

	va_start(args, format);
	written = vfprintf(stdout, format, args);
	va_end(args);
	return (written);
}
