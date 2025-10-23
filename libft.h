#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_toupper(int c);

int ft_tolower(int c);
int ft_atoi(const char *str);
size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
int strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *s, int c);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
char    *ft_strnst(const char *haystack, const char *needle, size_t len);
void    *ft_memset(void *b, int c, size_t len);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putstr_fd(char *s, int fd);

#endif