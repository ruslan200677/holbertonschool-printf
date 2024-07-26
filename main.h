#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int printf_string(va_list args):
int print_perc(void);
int printf_char(va_list val);
int print_i(va_list args);
int print_d(va_list args);
int(*get_function(char ch))(va_list);

#endif 
