#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
