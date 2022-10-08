/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:33:05 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 18:02:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalnum(int c); //ok
int		ft_isalpha(int c); //ok
int		ft_isascii(int c); //ok
int		ft_isdigit(int c); //ok
int		ft_isprint(int c); //ok
int		ft_atoi(const char *str); //ok
int		ft_strncmp(const char *s1, const char *s2, size_t n); //ok
int		ft_toupper(int c);//ok
int		ft_tolower(int c);//ok
size_t	ft_strlen(const char *s);//ok
char	*ft_strrchr(const char *s, int c);//ok
char	*ft_strchr(const char *s, int c);//ok
size_t	ft_strlcat(char *dest, const char *src, size_t size);//ok
char	*ft_strdup(const char *s1);//ok
char	*ft_strnstr(const char *big, const char *little, size_t len);//ok
void	*ft_memset(void *s, int c, size_t n); //ok
size_t	ft_strlcpy(char *dest, const char *src, size_t size);//ok
void	ft_bzero(void *s, size_t n);//ok

void	*ft_memcpy(void *dest, const void *src, size_t n);//ok!!!!!!!//dikkat
void	*ft_memmove(void *dest, const void *src, size_t len);//yapmadım
void	*ft_memchr(const void *s, int c, size_t n);// olmadı
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_calloc(size_t count, size_t size); // ok

char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);//!dikkat

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); //ok
void	ft_striteri(char *s, void (*f)(unsigned int, char *)); //ol
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n); // hehe bitti
char	**ft_split(char const *s, char c);//25satır
//boıuns
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);//olmadı
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);//olmadı
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void*));//olmadı
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));//!

#endif
