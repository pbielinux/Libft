//strmapi() function implementation
//function name: ft_strmapi()
/*
 * Description: Applies the given function 'f' to each character of the
 * given string in order to create a new string that is the result of
 * have 'f' run on string s. The same as strmap, except that we also
 * pass the specific index of our character in the given string.
*/
/* 
 * Return Value: It return a copy of the modified string.
 */

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
    
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}