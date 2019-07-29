#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct prfor - Struct prfor
 *
 * @form: The format type.
 * @f: The function associated.
 */
typedef struct prfor
{
	char *form;
	void (*f)(va_list);
} prfor_t;

/*generic functions*/
int _putchar(char c);
int _strlen(char *s);
char *_strdup(char *str);
char *rot13(char *s);

/*functios*/
int _printf(const char * const format, ...);
int print_s_c(const char * const format, ...);
int print_i_d(const char * const format, ...);
int print_b(const char * const format, ...);
int print_rot(const char * const format, ...);

/*print case functions*/
void print_char(va_list va);
void print_string(va_list va);
void print_number(va_list va);
void print_binary(va_list va);
void print_string_rot(va_list va);

#endif
