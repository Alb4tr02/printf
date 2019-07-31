### _PRINTF FUNCTION
This repository contain the files that makes owr own printf function.

  - Function files
  - man page file

# Description.

 _printf function is inspired in the standard printf that is part of the C language, this function do formatted printing. for more information, please see the man page file.

Man page file:
  - man_3_printf

## Conversion Specifiers
- c - characters.
- s - strings
- i - integrer
- d - base 10 numbers
- b - binary
- u - unsigned
- o - octal
- x - hexadecimal
- X - hexadecimal uppercase
- p - pointer
- r - reverse string
- R - rot13'ed encode

### FILES DESCRIPTION
- _printf.c 
//Main function, detect which printing function use

- 0-printf_c_s.c
//Print strings or characters.

- _putchar.c 
//Print character by character.

- holberton.h
//Header file contain the function prototypes and structrure declaration.

- 1-printf_i_d.c
//Print integrer

- 15-printf_rot13.c 
//Encode to rot13 and print strings

- 3-printf_b.c
//Print to binary.

- 14-printf_rev.c
//Print reverse string.

- 4-arrat_binary.c
//Print a binary array

- 4-print_Hexa.c
//Print in hexadecimal uppercase

- 4-print_hexa.c
//Print in hexadecimal.

- 4-printf_octal.c
//Print unsigned int base eight

- 4-printf_u.c
//Print unsigned integrer numbers

- 6-print_String.c
//Print strings and non-printing characters

- 7-print_pointer.c
//Print pointer address

- _strlen.c	add
//gets the lenght of a string

- man_3_printf
//MAN PAGE

### Tech

* C Language
* [Emacs Editor] - awesome terminal text editor

### Compilation 

> gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c

> You need to provide a main.c file with the cases for test.

### AUTHORS

- David Peralta
- Johan David Muñoz
Want to contribute? Great!

### Example
```c
#include "holberton.h"
int main (void)
{
    _printf("%R\n", "holberton");
    return(0);
}
```
> OUTPUT: ubyoregba
