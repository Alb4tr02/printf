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
void array_binary(int prueba, char *binary);
int print_octal_pos(int prueba);
int print_octal_neg(int prueba);
char copmareh(int res);
char copmareH(int res);
/*functios*/
int _printf(const char * const format, ...);

/*print case functions*/
int print_char(va_list va);
int print_string(va_list va);
int print_number(va_list va);
int print_binary(va_list va);
int print_string_rev(va_list va);
int print_string_rot(va_list va);
int print_hexa(va_list prueba);
int print_Hexa(va_list prueba);
int print_octal(va_list prueba);
#endif
