//isprint() function implementation
//function name: ft_isprint()
/* Description: Checks if the given char c is in ascii table  */
/* Return Value: true or false */

int  ft_isprint(int c)
{
    if (c >= 32 && c <= 126) 
		return (1);
	return (0);
}