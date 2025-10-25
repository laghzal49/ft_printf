#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
int helper(const char spec, va_list args);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putunbr(unsigned int n);
int ft_puthex(unsigned int n, int upper);
int ft_putptr(unsigned long n);
int ft_putptr_hex(unsigned long n);

#endif
