#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct prfor - Struct prfor
 *
 * @form: The format type.
 * @f: The function associated.
 */
typedef struct prfor
{
	char *form;
	int (*f)(va_list);
} prfor_t;

/*generic functions*/
int _putchar(char c);
int _strlen(char *s);
char *_strdup(char *str);
char *rot13(char *s);

/*functios*/
int _printf(const char * const format, ...);

/*print case functions*/
int print_char(va_list va);
int print_string(va_list va);
int print_number(va_list va);
int print_binary(va_list va);
int print_string_rev(va_list va);
int print_string_rot(va_list va);

#endif
