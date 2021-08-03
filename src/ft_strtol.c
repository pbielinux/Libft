#include "libft.h"

long	ft_strtol(const char *nptr, char **endptr, int base)
{
	const	char			*s = nptr;
	unsigned	long	ret;
	unsigned	long	cutoff;
	int							cutlim;
	int							any;
	int							c;
	int							neg;

	c = *s;
	neg = 0;

	/*
	* Skip white space and pick up leading +/- sign if any.
	* If base is 0, allow 0x for hex and 0 for octal, else
	* assume decimal; if base is already 16, allow 0x.
	*/
	if (!ft_isspace(*s))
		c = *s++;
	while (ft_isspace(*s))
		c = *s++;
	if (c == '-')
	{
		neg = 1;
		c = *s++;
	}
	else if (c == '+')
		c = *s++;
	if ((base == 0 || base == 16) && c == '0' && (*s == 'x' || *s == 'X'))
	{
		c = s[1];
		s += 2;
		base = 16;
	}
	if (base == 0 && c == '0')
		base = 8;
	else if (base == 0)
		base = 10;

	/*
	* Compute the cutoff value between legal numbers and illegal
	* numbers.  That is the largest legal value, divided by the
	* base.  An input number that is greater than this value, if
	* followed by a legal input character, is too big.  One that
	* is equal to this value may be valid or not; the limit
	* between valid and invalid numbers is then based on the last
	* digit.  For instance, if the range for longs is
	* [-2147483648..2147483647] and the input base is 10,
	* cutoff will be set to 214748364 and cutlim to either
	* 7 (neg==0) or 8 (neg==1), meaning that if we have accumulated
	* a value > 214748364, or equal but the next digit is > 7 (or 8),
	* the number is too big, and we will return a range error.
	*
	* Set any if any `digits' consumed; make it negative to indicate
	* overflow.
	*/
	if (neg)
		cutoff = -(unsigned long)LONG_MIN;
	else
		cutoff = LONG_MAX;
	cutlim = cutoff % (unsigned long)base;
	cutoff /= (unsigned long)base;

	ret = 0;
	any = 0;
	while (1)
	{
		if (ft_isdigit(c))
			c -= '0';
		else if (ft_isalpha(c))
		{
			if (ft_isupper(c))
				c -= 'A' - 10;
			else
				c -= 'a' - 10;
		}
		else
			break;
		if (c >= base)
			break;
		if (any < 0 || ret > cutoff || (ret == cutoff && c > cutlim))
			any = -1;
		else
		{
			any = 1;
			ret *= base;
			ret += c;
		}
		c = *s++;
	}
	if (any < 0) {
		if (neg)
			ret = LONG_MIN;
		else
			ret = LONG_MAX;
	}
	else if (neg)
		ret = -ret;
	if (endptr != 0)
	{
		if (any)
			*endptr = (char *) s - 1;
		else
			*endptr = (char *) nptr;
	}
	return (ret);
}
