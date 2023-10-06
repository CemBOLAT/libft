# Libft
> # Summary
> This project is about coding a C library.


# Mandatory Part 

| Program name | libft.a |
| ------ | ------ |
| Turn in files | Makefile, libft.h, ft_*.c |
| Makefile | NAME, all, clean, fclean, re |
| External functs | write, malloc, free |
| Description | Write your own library: a collection of functions that will be a useful tool for your cursus. |


## Part 1 - Libc functions

| Function Name | File           | Description                                       |
|---------------|----------------|---------------------------------------------------|
| ft_isalpha    | ft_isalpha.c   | Check if a character is alphabetic.             |
| ft_isdigit    | ft_isdigit.c   | Check if a character is a digit.                 |
| ft_isalnum    | ft_isalnum.c   | Check if a character is alphanumeric.           |
| ft_isascii    | ft_isascii.c   | Check if a character is within ASCII range.      |
| ft_isprint    | ft_isprint.c   | Check if a character is printable.              |
| ft_strlen     | ft_strlen.c    | Calculate the length of a string.               |
| ft_memset     | ft_memset.c    | Fill memory with a constant byte.               |
| ft_bzero      | ft_bzero.c     | Set the first n bytes of memory to zero.        |
| ft_memcpy     | ft_memcpy.c    | Copy memory area.                                |
| ft_memmove    | ft_memmove.c   | Copy memory area, allowing overlapping memory.  |
| ft_strlcpy    | ft_strlcpy.c   | Copy a string into a sized buffer.              |
| ft_strlcat    | ft_strlcat.c   | Append a string to a sized buffer.              |
| ft_toupper    | ft_toupper.c   | Convert a character to uppercase.               |
| ft_tolower    | ft_tolower.c   | Convert a character to lowercase.               |
| ft_strchr     | ft_strchr.c    | Locate the first occurrence of a character in a string. |
| ft_strrchr    | ft_strrchr.c   | Locate the last occurrence of a character in a string.  |
| ft_strncmp    | ft_strncmp.c   | Compare two strings up to a given length.       |
| ft_memchr     | ft_memchr.c    | Locate the first occurrence of a byte in memory. |
| ft_memcmp     | ft_memcmp.c    | Compare two blocks of memory.                   |
| ft_strnstr    | ft_strnstr.c   | Locate a substring in a string.                |
| ft_atoi       | ft_atoi.c      | Convert a string to an integer.                 |

## Part 2 - Additional functions

| Function Name | File            | Description                                       |
|---------------|-----------------|---------------------------------------------------|
| ft_substr     | ft_substr.c     | Create a substring from a string.              |
| ft_strjoin    | ft_strjoin.c    | Concatenate two strings into a new one.        |
| ft_strtrim    | ft_strtrim.c    | Trim characters from the beginning and end of a string. |
| ft_split      | ft_split.c      | Split a string into an array of substrings.    |
| ft_itoa       | ft_itoa.c       | Convert an integer to a string.                |
| ft_strmapi    | ft_strmapi.c    | Apply a function to each character in a string. |
| ft_striteri   | ft_striteri.c   | Apply a function to each character in a string with index. |
| ft_putchar_fd | ft_putchar_fd.c | Write a character to a file descriptor.       |
| ft_putstr_fd  | ft_putstr_fd.c  | Write a string to a file descriptor.          |
| ft_putendl_fd | ft_putendl_fd.c | Write a string followed by a newline to a file descriptor. |
| ft_putnbr_fd  | ft_putnbr_fd.c  | Write an integer to a file descriptor.       |

## Bonus Part - List Functions

| Function Name | File            | Description                                       |
|---------------|-----------------|---------------------------------------------------|
| ft_lstnew     | ft_lstnew.c     | Create a new list node.                        |
| ft_lstadd_front| ft_lstadd_front.c| Add a node to the front of the list.           |
| ft_lstsize    | ft_lstsize.c    | Get the number of nodes in a list.             |
| ft_lstlast    | ft_lstlast.c    | Get the last node of a list.                   |
| ft_lstadd_back| ft_lstadd_back.c | Add a node to the end of the list.             |
| ft_lstdelone  | ft_lstdelone.c  | Delete a node from the list.                  |
| ft_lstclear   | ft_lstclear.c   | Clear the entire list and free memory.       |
| ft_lstiter    | ft_lstiter.c    | Iterate over the list and apply a function to each node. |
| ft_lstmap     | ft_lstmap.c     | Create a new list by applying a function to each node.   |


# Bonus Part

```sh
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
```

- content: The data contained in the node.
- void * allows to store any kind of data.
- next: The address of the next node, or NULL if the next node is the last one.
