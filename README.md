*This project has been created as part of the 42 curriculum by diomonte.*

# Libft

## Description

**Libft** is the first project of the 42 common core. The goal is to build, from scratch, a personal C library (`libft.a`) that reimplements a set of standard C library functions, together with additional utility functions that are not part of libc. This library is meant to be reused and extended in all future 42 projects.

The project teaches the fundamentals of C programming: pointers, dynamic memory allocation, string and memory manipulation, static libraries, `Makefile`s, and respecting the 42 Norm. It also builds a strong understanding of how the standard library works internally, including edge cases and undefined behaviour.

### Library overview

The library is organized in three parts.

#### Part 1 – Libc functions

Reimplementations of standard functions, with the same prototypes and behaviour as the originals (prefixed with `ft_`).

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String functions | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory functions | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

#### Part 2 – Additional functions

Functions that are not in libc, or that are part of it in a different form.

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of a string, starting at a given index with a maximum length. |
| `ft_strjoin` | Returns a new string resulting from the concatenation of two strings. |
| `ft_strtrim` | Returns a copy of a string with the characters of a given set removed from the beginning and the end. |
| `ft_split` | Splits a string using a delimiter character and returns a `NULL`-terminated array of strings. |
| `ft_itoa` | Converts an integer to a newly allocated string. |
| `ft_strmapi` | Applies a function to each character of a string (with its index) and returns the new string. |
| `ft_striteri` | Applies a function to each character of a string (with its index), modifying it in place. |
| `ft_putchar_fd` | Writes a character to a given file descriptor. |
| `ft_putstr_fd` | Writes a string to a given file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a given file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a given file descriptor. |

#### Linked lists

Functions to manipulate singly linked lists, using the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a single node using a deletion function. |
| `ft_lstclear` | Deletes and frees a node and all the following ones. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## Instructions

### Requirements

- A C compiler (`cc`, `gcc` or `clang`)
- `make`
- `ar` (to create the static library)

### Compilation

Clone the repository and run `make` at its root:

```bash
make          # compiles the mandatory part and creates libft.a
make clean    # removes the object files (.o)
make fclean   # removes the object files and libft.a
make re       # fclean + all
```

All files are compiled with the flags `-Wall -Wextra -Werror`.

### Usage

Include the header in your source files and link against the library when compiling:

```c
#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strjoin("Hello, ", "42!");
	ft_putendl_fd(str, 1);
	free(str);
	return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
./program
```

### Norm

The code follows the 42 Norm. You can check it with:

```bash
norminette *.c libft.h
```

## Resources

### References

- [`man` pages](https://man7.org/linux/man-pages/) – `string(3)`, `memory(3)`, `ctype(3)`, `malloc(3)`, `write(2)`, etc.
- [42 Norm](https://github.com/42School/norminette) – coding standard used in the project
- [Valgrind documentation](https://valgrind.org/docs/manual/manual.html) – detecting memory leaks and invalid accesses

### Use of AI

AI (Claude and Gemini) was used as a support tool during the project, to be able to know what concepts should I learn to get this library done. It was used for:

- **Understanding concepts:** clarifying the expected behaviour of libc functions and edge cases.

In conclusion:

This project was challenging, once that many functions was new to me. To understand every detail of them, was hard (memory manipulation and linked lists, especially).
