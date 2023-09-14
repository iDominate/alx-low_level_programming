#ifndef V_F_H_
#define V_F_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct char_function - struct
 * @character: character
 * @func_ptr: pointer to a function
 */
struct char_function
{
	char character;
	void (*func_ptr)(va_list *ar_list);
};

typedef struct char_function char_func_ptr;
void (*get_func(char identifier, struct char_function *arr))(va_list *arg);
void print_all(const char * const format, ...);

void print_char(va_list *arg);
void print_integer(va_list *arg);
void print_float(va_list *arg);
void print_string(va_list *arg);

#endif
