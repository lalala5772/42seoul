#ifndef LIBFT_H
#   define  LIBFT_H

#include <sys/types.h>
#include <string.h>

int ft_isalpha(int  c);
int ft_isdigit(int  c);
int ft_isalnum(int  c);
int ft_isascii(int  c);
int ft_print(int    c);
int ft_strlen(char  *c);
void   *memset(void *dest, int value, size_t count);
void    *bzero(void *ptr, size_t n);
void *ft_memcpy(void *dest, void *src, size_t num);
void    *ft_memmove(void *dst, const void *src, size_t len);


#endif