#include "ft_printf.h"

int ft_putptr(unsigned long n)
{
  int c;

  c = 0;
  c += ft_putstr("0x");
  if (n == 0)
    c += ft_putchar('0');
  else
    c += ft_putptr_hex(n);
  return c;
}

int ft_putptr_hex(unsigned long n)
{
    int c = 0;

    if (n >= 16)
        c += ft_putptr_hex(n / 16);
    c += ft_putchar("0123456789abcdef"[n % 16]);
    return c;
}
