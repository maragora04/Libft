*This project has been created as part of the 42 curriculum by mamendes.*

# Libft

## Description

**Libft** is a custom C library built as part of the 42 school curriculum. The goal of this project is to re-implement a selection of standard C library functions (`libc`) from scratch, deepening the understanding of low-level programming, memory management, and data structures.

The library is divided into three parts:
- **Libc functions** — re-implementations of standard functions such as `ft_strlen`, `ft_memcpy`, `ft_strchr`, `ft_atoi`, etc.
- **Additional functions** — utility functions not found in `libc` but useful for future projects, such as `ft_substr`, `ft_strjoin`, `ft_itoa`, `ft_putstr_fd`, etc.
- **Linked list functions** — a set of functions to manipulate linked lists using the `t_list` struct defined in the `libft.h` file, including `ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, `ft_lstclear`, etc.

## Instructions

### Requirements

- GCC compiler
- `make`
- A Unix-based system (Linux or macOS)

### Compilation

Clone the repository and run:

```bash
git clone "42 dot git repo link here" Libft
cd Libft
make
```

This will generate a `libft.a` static library file.


### Usage

Include the library in your project at compilation to automatically create an a.out file easily:

```bash
cc -Wall -Werror -Wextra your_file.c libft.a 
```

The header is included in all source files:

```c
#include "libft.h"
```

### Makefile rules

| Rule | Description |
|------|-------------|
| `make` | Compiles the Libft library into a `libft.a` file and creates object files for all the functions |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Runs `fclean` then `all` |

## Library Overview

### Libc functions

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a byte value |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlap) |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |
| `ft_strchr` | Locates character in string |
| `ft_strrchr` | Locates character in string (from end) |
| `ft_strncmp` | Compares two strings up to n bytes |
| `ft_memchr` | Scans memory for a byte |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Locates substring in string |
| `ft_atoi` | Converts string to integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string |

### Additional functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from string edges |
| `ft_split` | Splits string by delimiter into array |
| `ft_itoa` | Converts integer to string |
| `ft_strmapi` | Applies function to each char (new string) |
| `ft_striteri` | Applies function to each char (in place) |
| `ft_putchar_fd` | Outputs character to file descriptor |
| `ft_putstr_fd` | Outputs string to file descriptor |
| `ft_putendl_fd` | Outputs string + newline to fd |
| `ft_putnbr_fd` | Outputs integer to file descriptor |

### Linked list functions

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds node at the front of the list |
| `ft_lstsize` | Returns the size of the list |
| `ft_lstlast` | Returns the last node |
| `ft_lstadd_back` | Adds node at the back of the list |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees the entire list |
| `ft_lstiter` | Applies function to each node |
| `ft_lstmap` | Applies function and returns new list |

## Resources

### Documentation & References
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [cppreference.com — C standard library](https://en.cppreference.com/w/c)
- [42 Docs — libft subject](https://cdn.intra.42.fr/pdf/pdf/960/libft.en.subject.pdf)

### Useful tools
- [libft-unit-test by alelievr](https://github.com/alelievr/libft-unit-test) — unit tests for libft
- [francinette](https://github.com/xicodomingues/francinette) — automated tester for 42 projects

### AI usage
Claude (claude.ai) was used during this project for the following purposes:
- Helping understand the expected behaviour of certain standard C functions
- Reviewing edge cases (e.g. NULL inputs, empty strings, boundary conditions)
- Inspiration for this README file