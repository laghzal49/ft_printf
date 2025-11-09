#include "ft_printf.h"

int ft_puthex(unsigned int n, int up)
{
  char *base;
  int c;

  c = 0;
  if (up)
    base = "0123456789ABCDEF";
  else
    base = "0123456789abcdef";
  if (n >= 16)
    c += ft_puthex(n / 16, up);
  c += ft_putchar(base[n % 16]);
  return c;
}
