//isspace() function implementation
//function name: ft_isspace()
/* Description: Checks if the char c is space */
/* Return Value: true or false */

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