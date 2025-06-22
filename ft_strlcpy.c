#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}