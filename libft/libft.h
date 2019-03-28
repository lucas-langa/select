/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llanga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 21:46:51 by llanga            #+#    #+#             */
/*   Updated: 2018/06/15 15:11:10 by llanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <wchar.h>
# define ABS(x) ((x < 0) ? -(x) : (x))

typedef	struct	s_flist
{
	char		*flags;
	short		width;
	short		prcsn;
	char		hh;
	char		h;
	char		ll;
	char		l;
	char		j;
	char		z;
	char		specifier;
	short		size;
}				t_flist;

int		ft_printf(char *format, ...);
int		ift_putchar(char chr);
int		ft_fnscall(char **input, va_list va);
size_t	ft_atoif(char **str1);
char	ft_strchrf(char *str0, int form00);
int		ift_putstr(char *str, int prcsn);
int		ft_putprcnt(t_flist *lst, char p);
int		ft_chrhandle(t_flist *lst, void *c);
int		ft_strhandle(t_flist *lst, void *s);
int		ft_putwchar(wchar_t wc);
int		ft_putwstr(wchar_t *ws, int prcsn);
int		ft_dgthandle(t_flist *lst, void *n00);
int		ft_unshandle(t_flist *lst, void *n01);
int		ft_octhandle(t_flist *lst, void *n10);
int		ft_hexhandle(t_flist *lst, void *n11);
int		ft_ptrhandle(t_flist *lst, void *n);
int		ft_output(t_flist *lst, va_list va);
int  	ft_lindexof(char *str, char c);
int		ft_indexof(char *str, char c);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t 	ft_strlen(const char *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnew(size_t size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char 	*ft_strdup(const char *s);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);

#endif
