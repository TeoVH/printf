# _printf

A custom implementation of the C standard library `printf` function, written from scratch in C as part of the Holberton School low-level programming curriculum. Supports a subset of the conversion specifiers and follows the prototype:

```c
int _printf(const char *format, ...);
```

## Supported Conversion Specifiers

| Specifier | Description |
|-----------|-------------|
| `%c` | Single character |
| `%s` | Null-terminated string |
| `%d` | Signed decimal integer |
| `%i` | Signed decimal integer |
| `%%` | Literal `%` character |

Plain characters in the format string are copied verbatim. Unknown specifiers are printed as-is (`%` followed by the character).

The function returns the number of characters written, or `-1` if `format` is `NULL`.

## Flowchart

![_printf flowchart](https://user-images.githubusercontent.com/90810410/160452342-1b4282cf-f7c7-49e7-a0ce-7df50d601299.png)

## Project Structure

```
printf/
├── _printf.c        # Main dispatcher: walks the format string
├── _putchar.c       # Low-level write helper (write(1, &c, 1))
├── print_char.c     # Handles %c
├── print_string.c   # Handles %s
├── print_int.c      # Handles %d and %i
├── main.h           # Public prototypes and includes
├── man_3_printf     # Man page for _printf
└── README.md
```

## Build & Use

Compile with the Holberton standard flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

Use it from your own program by including the header and linking the sources:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s! You are %d years old.\n", "world", 21);
    return (0);
}
```

## Man Page

A man page is included in the repository. To view it locally:

```bash
man ./man_3_printf
```

## Author

- **Mateo Villada** — [@TeoVH](https://github.com/TeoVH)

## Acknowledgments

Project completed as part of the [Holberton School](https://www.holbertonschool.com/) low-level programming curriculum.
