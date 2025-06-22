#include "libft.h"

int     ft_atoi(const char *str)
{
    int num;
    int sign;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    sign = 1;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    num = 0;
    while (*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;	
	}		
    return (num * sign);    
}