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
