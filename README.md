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

- CC compiler
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
| `ft_memset` | Fills memory with a given byte value |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies a given "source" memory area to "dest" |
| `ft_memmove` | Moves a given memory area (handles overlap) |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Locates a character in string |
| `ft_strrchr` | Locates a character in a string from the end |
| `ft_strncmp` | Compares two strings up to n bytes |
| `ft_memchr` | Scans memory for a given byte |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Locates a substring in a string |
| `ft_atoi` | Converts an ASCII character to integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string |

### Additional functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from string edges |
| `ft_split` | Splits string by delimiter into an array of strings |
| `ft_itoa` | Converts an integer to ASCII character |
| `ft_strmapi` | Applies a given function to each character (creates a new string) |
| `ft_striteri` | Applies a given function to each character (in place) |
| `ft_putchar_fd` | Outputs a character to file descriptor |
| `ft_putstr_fd` | Outputs a string to file descriptor |
| `ft_putendl_fd` | Outputs a string + newline to file descriptor |
| `ft_putnbr_fd` | Outputs an integer to file descriptor |

### Linked list functions

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the front of the list |
| `ft_lstsize` | Returns the size of the list |
| `ft_lstlast` | Returns the last node |
| `ft_lstadd_back` | Adds a node at the back of the list |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees the entire list |
| `ft_lstiter` | Applies a given function to each node |
| `ft_lstmap` | Applies a given function and returns a new list |

## Resources

### Documentation & References
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [cppreference.com — C standard library](https://en.cppreference.com/w/c)
- [42 Docs — libft subject](https://cdn.intra.42.fr/pdf/pdf/960/libft.en.subject.pdf)

### AI usage
Claude (claude.ai) was used during this project for the following purposes:
- Helping understand the expected behaviour of certain standard C functions
- Reviewing edge cases (e.g. NULL inputs, empty strings, boundary conditions)
- Inspiration for this README file