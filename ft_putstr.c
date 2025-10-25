#include "ft_printf.h"

int ft_putstr(char *s)
{
  int i;

  if (!s)
    s = ("null");
  i = 0;
  while (*s)
  {
    ft_putchar(*s);
    s++;
    i++;
  }
  return i;
}
