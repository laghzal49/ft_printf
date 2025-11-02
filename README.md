# 🖨️ ft_printf

A custom implementation of the C standard `printf` function.  
This version includes **only the mandatory part** — no bonus flags or features.

---

## 🚀 Overview

`ft_printf` reproduces the behavior of the original `printf`,  
allowing formatted output to standard output (`stdout`).

```c
int ft_printf(const char *format, ...);
```

---

## ✨ Supported Conversions

| Specifier | Description |
|-----------|-------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address |
| `%d` / `%i` | Print a signed integer |
| `%u` | Print an unsigned integer |
| `%x` | Print a number in lowercase hexadecimal |
| `%X` | Print a number in uppercase hexadecimal |
| `%%` | Print a literal `%` character |

🧩 No bonus conversions or flags are included.

---

## ⚙️ Build

```bash
make            # Compile libftprintf.a
make clean      # Remove object files
make fclean     # Full clean (objects + library)
make re         # Rebuild everything
```

Then link it in your program:

```bash
cc main.c libftprintf.a -Wall -Wextra -Werror -o test
```

---

## 🧠 Example

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello %s! Number: %d, Hex: %x\n", "world", 42, 42);
    ft_printf("Printed %d characters\n", count);
    return (0);
}
```

Output:

```
Hello world! Number: 42, Hex: 2a
Printed 38 characters
```

---

## 📁 Structure

```
.
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putptr.c
├── ft_putnbr.c
├── ft_putunbr.c
└── ft_puthex.c
```

---

## 🔒 Allowed Functions

- `write`
- `malloc`
- `free`
- Variadic macros: `va_start`, `va_arg`, `va_end`, `va_copy`

---

## ⚠️ Notes

- `NULL` string → prints `(null)`
- `NULL` pointer → prints `(nil)`
- `'\0'` via `%c` → counts as one printed character
- Return value → total printed characters

---

## 🧾 License

This project is part of the 42 curriculum.  
You may reuse it for learning or portfolio purposes.
