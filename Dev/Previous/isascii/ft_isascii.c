//isascii() function implementation
//function name: ft_isascii()
/* Description: Checks if the given char c is in ascii table  */
/* Return Value: true or false */

int  ft_isascii(int c)
{
    if (c >= 0 && c <= 127) 
		return (1);
	return (0);
}