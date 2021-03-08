//toupper() function implementation
//function name: ft_toupper()
/* Description: Convert the given c to uppercase if it's not */
/* Return Value: the given c in uppercase */

int  ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z') 
		return (c - 'a' + 'A');
	return (c);
}