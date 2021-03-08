//isalpha() function implementation
//function name: ft_isalpha()
/* Description: Checks if the given char c is alphabetic */
/* Return Value: true or false */

int  ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}