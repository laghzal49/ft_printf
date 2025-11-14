#include "ft_printf.h"

int ft_putnbr(int n)
{
  int c;

  c = 0;
  if (n == -2147483648)
    return (ft_putstr("-2147483648"));
  if (n < 0)
  {
    c += ft_putchar('-');
    n = -n;
  }
   if (n > 9)
    c += ft_putnbr(n / 10);
  ft_putchar((n % 10) + '0');
  c++;
  return c;
}
