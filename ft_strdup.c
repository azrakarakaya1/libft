#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *s;
    size_t  len;

    len = ft_strlen(str);
    s = (char *)malloc(len + 1);
    if ((s) == NULL)
        return (NULL);
    ft_memcpy(s, str, len + 1);
    return (s);
}