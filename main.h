#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>




#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
#define S_LONG 2
#define S_SHORT 1
#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int print_char(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],int flags, int width, int precision, int size);
int get_width(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_flags(const char *format, int *i);







