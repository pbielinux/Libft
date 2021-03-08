//tolower() function implementation
//function name: ft_tolower()
/* Description: Convert the given c to lower if it's not */
/* Return Value: the given c in lowercase */

int  ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z') 
		return (c - 'A' + 'a');
	return (c);
}