/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduque-p <jduque-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#             */
/*   Updated: 2021/08/23 21:34:19 by jduque-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// 1.FUNCIONES DEL LIBC
int		ft_isalpha(int chr);
int		ft_isdigit(int chr);
int		ft_isalnum(int chr);
int		ft_isascii(int chr);
int		ft_isprint(int chr);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *str, size_t len);
void	*ft_memcpy(void *dst, const void *str, size_t len);
void	*ft_memmove(void *dst, const void *str, size_t len);
size_t	ft_strlcpy(char *dst, const char *str, size_t len);
size_t	ft_strlcat(char *dst, const char *str, size_t len);
int		ft_toupper(int chr);
int		ft_tolower(int chr);
char	*ft_strchr(const char *str, int chr);
char	*ft_strrchr(const char *str, int chr);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
void	*ft_memchr(const void *str, int c, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t len);
char	*ft_strnstr(const char *strBig, const char *strlittle, size_t len);
int		ft_atoi(const char *str);

void	*ft_calloc(size_t nmem, size_t len);
char	*ft_strdup(const char *str);

// 2.FUNCIONES ADICIONALES
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// 3.PARTE BONUS
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
