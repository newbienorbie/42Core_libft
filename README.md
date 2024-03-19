# What is Libft?
In this first project of 42 Cursus, our mission is to revamp a bunch of libc functions, just like the ones you find in their manual pages. The revamped functions should have the exact same prototypes and behaviors as the original ones. We’re talking about clones here! So, when someone uses your ft_strlen, they should get the same results and behavior as if they had used the original strlen.

# List of Functions
### Funtions from <ctype.h>

| **Function** |                   **Description**                  |
|:------------:|----------------------------------------------------|
| [ft_isalpha](https://github.com/newbienorbie/42Core_libft/blob/main/ft_isalpha.c)   | Checks for an alphabetic character                 |
| [ft_isdigit](https://github.com/newbienorbie/42Core_libft/blob/main/ft_isdigit.c)   | Checks for a digit (0 through 9)                   |
| [ft_isalnum](https://github.com/newbienorbie/42Core_libft/blob/main/ft_isalnum.c)   | Checks for an alphanumeric character               |
| [ft_isascii](https://github.com/newbienorbie/42Core_libft/blob/main/ft_isascii.c)   | Checks whether c fits into the ASCII character set |
| [ft_isprint](https://github.com/newbienorbie/42Core_libft/blob/main/ft_isprint.c)   | Checks for any printable character                 |
| [ft_toupper](https://github.com/newbienorbie/42Core_libft/blob/main/ft_toupper.c)   | Converts characters to uppercase                   |
| [ft_tolower](https://github.com/newbienorbie/42Core_libft/blob/main/ft_tolower.c)   | Converts characters to lowercase                   |

### Functions from <string.h>

| **Function** |                      **Description**                      |
|:------------:|-----------------------------------------------------------|
| [ft_strlen](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strlen.c)    | Calculates the length of a string                         |
| [ft_memset](https://github.com/newbienorbie/42Core_libft/blob/main/ft_memset.c)    | Fills memory with a constant byte                         |
| [ft_bzero](https://github.com/newbienorbie/42Core_libft/blob/main/ft_bzero.c)    | Makes a string as zero byte                               |
| [ft_memcpy](https://github.com/newbienorbie/42Core_libft/blob/main/ft_memcpy.c)    | Copies memory area                                        |
| [ft_memmove](https://github.com/newbienorbie/42Core_libft/blob/main/ft_memmove.c)   | Copies memory area by handling overlapping memory address |
| [ft_strlcpy](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strlcpy.c)   | Copies string to a specific size                          |
| [ft_strlcat](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strlcat.c)   | Concatenates a string to a specific size                  |
| [ft_strchr](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strchr.c)    | Locates character in a string                             |
| [ft_strrchr](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strrchr.c)   | Locates character in a string                             |
| [ft_strncmp](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strncmp.c)   | Compares two strings                                      |
| [ft_memchr](https://github.com/newbienorbie/42Core_libft/blob/main/ft_memchr.c)    | Scans memory for a character                              |
| [ft_memcmp](https://github.com/newbienorbie/42Core_libft/blob/main/ft_memcmp.c)    | Compares memory areas                                     |
| [ft_strnstr](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strnstr.c)   | Locates a substring in a string                           |
| [ft_strdup](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strdup.c)    | Creates a duplicate for the string passed as a parameter  |

### Functions from <stdlib.h>

| **Function** | **Description**                                  |
|:------------:|--------------------------------------------------|
| [ft_atoi](https://github.com/newbienorbie/42Core_libft/blob/main/ft_atoi.c)      | Converts a string to an integer                  |
| [ft_calloc](https://github.com/newbienorbie/42Core_libft/blob/main/ft_calloc.c)    | Allocates memory and sets its bytes' values to 0 |

### Non-standard Functions

|  **Function** | **Description**                                                      |
|:-------------:|----------------------------------------------------------------------|
| [ft_substr](https://github.com/newbienorbie/42Core_libft/blob/main/ft_substr.c)     | Returns a substring from a string                                    |
| [ft_strjoin](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strjoin.c)    | Concatenates two strings                                             |
| [ft_strtrim](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strtrim.c)    | Trims the beginning and end of a string with a specific set of chars |
| [ft_split](https://github.com/newbienorbie/42Core_libft/blob/main/ft_split.c)      | Splits a string using a char as parameter                            |
| [ft_itoa](https://github.com/newbienorbie/42Core_libft/blob/main/ft_itoa.c)       | Converts a number into a string                                      |
| [ft_strmapi](https://github.com/newbienorbie/42Core_libft/blob/main/ft_strmapi.c)    | Applies a function to each character of a string                     |
| [ft_striteri](https://github.com/newbienorbie/42Core_libft/blob/main/ft_striteri.c)   | Applies a function to each character of a string                     |
| [ft_putchar_fd](https://github.com/newbienorbie/42Core_libft/blob/main/ft_putchar_fd.c) | Outputs a char to a file descriptor                                  |
| [ft_putstr_fd](https://github.com/newbienorbie/42Core_libft/blob/main/ft_putstr_fd.c)  | Outputs a string to a file descriptor                                |
| [ft_putendl_fd](https://github.com/newbienorbie/42Core_libft/blob/main/ft_putendl_fd.c) | Outputs a string to a file descriptor, followed by a new line        |
| [ft_putnbr_fd](https://github.com/newbienorbie/42Core_libft/blob/main/ft_putnbr_fd.c)  | Outputs a number to a file descriptor                                 |

### Linked List Funtions

|   **Function**  | **Description**                               |
|:---------------:|-----------------------------------------------|
| [ft_lstnew](https://github.com/newbienorbie/42Core_libft/blob/main/ft_lstnew.c)       | Creates a new list element                    |
| [ft_lstadd_front](https://github.com/newbienorbie/42Core_libft/blob/main/ft_lstadd_front.c) | Adds an element at the beginning of a list    |
| [ft_lstsize](https://github.com/newbienorbie/42Core_libft/blob/main/ft_lstsize.c)      | Counts the number of elements in a list       |
| [ft_lstlast](https://github.com/newbienorbie/42Core_libft/blob/main/ft_lstlast.c)      | Returns the last element of the list          |
| [ft_lstadd_back](https://github.com/newbienorbie/42Core_libft/blob/main/ft_lstadd_back.c)  | Adds an element at the end of a list          |
| [ft_lstclear](https://github.com/newbienorbie/42Core_libft/blob/main/ft_lstclear.c)     | Deletes and free list                         |
| [ft_lstiter](https://github.com/newbienorbie/42Core_libft/blob/main/ft_lstiter.c)      | Applies a function to each element of a list. |
| [ft_lstmap](https://github.com/newbienorbie/42Core_libft/blob/main/ft_lstmap.c)       | Applies a function to each element of a list. |

# Result
<img width="1049" alt="Screenshot 2024-03-19 at 20 11 46" src="https://github.com/newbienorbie/42Core_libft/assets/151909800/1fb96a76-1652-4d9b-9de4-53445015b216">
