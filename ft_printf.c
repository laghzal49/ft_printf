#include "ft_printf.h"

int helper(const char spec, va_list args)
{
  if (spec == 'c')
    return (ft_putchar(va_arg(args, int)));
  else if (spec == 's')
      return (ft_putstr(va_arg(args, char *)));
  else if (spec == 'd' || spec == 'i')
      return (ft_putnbr(va_arg(args, int)));
  else if (spec == 'u')
      return (ft_putunbr(va_arg(args, unsigned int)));
  else if (spec == 'x')
      return (ft_puthex(va_arg(args, unsigned int), 0));
  else if (spec == 'X')
      return (ft_puthex(va_arg(args, unsigned int), 1));
  else if (spec == 'p')
      return (ft_putptr(va_arg(args, unsigned long)));
  else if (spec == '%')
      return (ft_putchar('%'));
  return 0;
}
int ft_printf(const char *format, ...)
{
  va_list args;
  int count;

  count = 0;
  va_start(args , format);
  while(*format)
  {
    if (*format == '%' && *(format + 1))
    {
      format++;
      count += helper(*format, args);
    }
    else
      count += ft_putchar(*format);
    format++;
  }
  va_end(args);
  return count;
}
