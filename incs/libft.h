/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:08:22 by tpotier           #+#    #+#             */
/*   Updated: 2019/05/02 19:45:46 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define GNL_BS		32

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_dlist
{
	void			*content;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}					t_dlist;

typedef struct		s_sstack
{
	int				*stack;
	size_t			sp;
	size_t			size;
}					t_sstack;

typedef struct	s_fb
{
	char		*buff;
	int			fd;
}				t_fb;

int					ft_getnextline(const int fd, char **line);

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *h, const char *n);
char				*ft_strnstr(const char *h, const char *n, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_strlen_bfrchr(char *s, char c, size_t *size);
int					ft_strncat_mal(char **s1, char *s2, size_t n);

void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
char				*ft_itoa(int n);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *nw);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				*ft_lstdelif(t_list **alst,
						int (*cond)(void *, size_t, void *),
						void *comp, void (*del)(void *, size_t));

t_dlist				*ft_dlstnew(void *content);
void				ft_dlstdel(t_dlist **lst, void (*del)(void *));
void				ft_dlstadd_end(t_dlist **lst, void *content);
void				ft_dlstdelall(t_dlist **lst, void (*del)(void *));
void				ft_dlstdisp(t_dlist *stk, void (*dsp)(void *));

void				ft_stkswap(t_dlist **stk);
void				ft_stkpush(t_dlist **stk, void *n);
void				*ft_stkpop(t_dlist **stk);

void				ft_sstkswap(t_sstack *stk);
void				ft_sstkpush(t_sstack *stk, int n);
int					ft_sstkpop(t_sstack *stk);
void				ft_sstkrot(t_sstack *stk);
void				ft_sstkrrot(t_sstack *stk);
int					ft_sstkchkord(t_sstack *stk);
void				ft_sstkdisp(t_sstack *stk);
t_sstack			*ft_sstkinit(size_t s);
void				ft_sstkdel(t_sstack **stk);

#endif
