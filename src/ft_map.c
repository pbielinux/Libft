#include "libft.h"

double	ft_map(double nb, double	in_min, double in_max, double out_min, double out_max)
{
	return (out_min + ((out_max - out_min) / (in_max - in_min)) * (nb - in_min));
}
