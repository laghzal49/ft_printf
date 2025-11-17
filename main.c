#include "ft_printf.h"
#include <stdio.h> // just for comparison with standard printf
#include <stdio.h>

int main(void)
{
    int a = 42;
    char c = 'A';
    char *str = "Hello, 42!";
    unsigned int u = 3000;
    void *ptr = &a;

    // Testing all ft_printf specifiers
    ft_printf("Char: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Decimal: %d\n", a);
    ft_printf("Integer: %i\n", -a);
    ft_printf("Unsigned: %u\n", u);
    ft_printf("Hex lowercase: %x\n", u);
    ft_printf("Hex uppercase: %X\n", u);
    ft_printf("Percent: %%\n");

    // Optional: compare with standard printf
    printf("\n--- Standard printf for comparison ---\n");
    printf("Char: %c\n", c);
    printf("String: %s\n", str);
    printf("Pointer: %p\n", ptr);
    printf("Decimal: %d\n", a);
    printf("Integer: %i\n", -a);
    printf("Unsigned: %u\n", u);
    printf("Hex lowercase: %x\n", u);
    printf("Hex uppercase: %X\n", u);
    printf("Percent: %%\n");

    return 0;
}

