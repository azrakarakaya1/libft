#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    const unsigned char *ptr;

    ptr = (const unsigned char *)str;
    while(n--)
    {
        if(*ptr == (unsigned char)c)
            return ((void *)ptr);
        ptr++;
    }
    return (0);
}