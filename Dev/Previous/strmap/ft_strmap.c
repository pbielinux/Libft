//strmap() function implementation
//function name: ft_strmap()
/*
 * Description: Applies the given function 'f' to each character of the
 * given string in order to create a new string that is the result of
 * have 'f' run on string s.
*/
/* 
 * Return Value: It return a copy of the modified string.
 */

char		*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;
    
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1)))
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}