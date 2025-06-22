#include "libft.h"

int ft_strlen(const char *str) {

    size_t len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}