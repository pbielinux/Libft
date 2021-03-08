//atoi() function implementation
//function name: ft_atoi()
/*
 * Description: converts the string argument str to an integer.
*/
/* Return Value: returns the converted integral number as an int value.
 * If no valid conversion could be performed, it returns zero.
 */

#include <stdio.h>

int  ft_isspace(int c)
{
    if (c == '\t'
        || c == '\n'
        || c == '\v'
        || c == '\f'
        || c == '\r'
        || c == ' ')
        return (1);
    return (0);
}

int		ft_atoi(char *s)
{
	int		sign;
	long	r;

	r = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (sign * (int)r);
}
