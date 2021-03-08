//wrdcnt() function implementation
//function name: ft_wrdcnt()
/*
 * Description: A function to count the number of words in a string,
 * determined by the occurrence of a character c.
*/
/* Return Value: The number of words.
 */

int ft_wrdcnt(const char *str, char c)
{
    unsigned int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i] != '\0')
            count++;
        while (str[i] && (str[i] != c))
            i++;
    }
    return (count);
}
