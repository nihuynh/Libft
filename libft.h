/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:34:50 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/03 16:33:50 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef unsigned char	t_byte;
typedef unsigned int	t_ui;
typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;
/*
** Partie I
*/
void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *str, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *ds, const void *sr, int c, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t n);
void					*ft_memchr(const void *str, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
size_t					ft_strlen(const char *str);
char					*ft_strdup(const char *src);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t n);
size_t					ft_strlcpy(char *dst, const char *src, size_t n);
char					*ft_strcat(char *dst, const char *src);
char					*ft_strncat(char *dst, const char *src, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr (const char *str, int c);
char					*ft_strrchr (const char *str, int c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strnstr(const char *ha, const char *ne, size_t len);
int						ft_atoi(const char *str);
int						ft_isalpha(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_islower(int c);
int						ft_isprint(int c);
int						ft_isupper(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);
/*
** Partie II
*/
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *str);
void					ft_striter(char *str, void (*f)(char*));
void					ft_striteri(char *str, void (*f)(unsigned int, char*));
char					*ft_strmap(char const *str, char (*f)(char));
char					*ft_strmapi(char const *s, char (*f)(t_ui, char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s1, t_ui start, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *str);
char					**ft_strsplit(char const *str, char c);
char					*ft_itoa(int n);
void					ft_putchar(char c);
void					ft_putstr(char const *str);
void					ft_putendl(char const *str);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *str, int fd);
void					ft_putendl_fd(char const *str, int fd);
void					ft_putnbr_fd(int n, int fd);
/*
** list
*/
t_list					*ft_lstnew(const void *content, size_t content_size);
void					ft_lstdelone(t_list **als, void (*del)(void *, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstaddbk(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
/*
** extra
*/
int						ft_abs(int value);
int						ft_btw(int value, int a, int b);
int						ft_min(int a, int b);
int						ft_max(int a, int b);
size_t					ft_lstlen(const t_list *lst);
void					ft_lstrev(t_list **alst);
t_list					ft_strlstsplit(const char *str, char c);
size_t					ft_strclen(const char *s, char c);
void					*ft_memrcpy(void *dst, const void *src, size_t n);
t_list					*ft_lstlast(t_list *alst);
t_list					*ft_lstat(t_list *alst, unsigned int n);
int						ft_isblank(int c);
int						ft_iscntrl(int c);
int						ft_isgraph(int c);
int						ft_isspace(int c);
int						ft_isxdigit(int c);
char					*ft_itoa_base(int value, int base);
int						ft_strcasecmp(const char *s1, const char *s2);
int						ft_strncasecmp(const char *s, const char *ns, size_t n);
char					*ft_strndup(const char *src, size_t n);
int						ft_str_is_alpha(char *str);
int						ft_str_is_lowercase(char *str);
int						ft_str_is_numeric(char *str);
int						ft_str_is_printable(char *str);
int						ft_str_is_uppercase(char *str);
char					*ft_strlowcase(char *str);
char					*ft_strupcase(char *str);
char					*ft_strcapitalize(char *str);
char					*ft_strcasestr(const char *str, const char *ne);

#endif
