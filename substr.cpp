#include "mylib.h"

static  unsigned int  _strlen(char *str)
{
    unsigned int     idx;
    unsigned int     count;

    idx = 0;
    count = 0;
    while (*(str + idx) != '\0')
    {
        count++;
        idx++;
    }
    return (count);
}


char	*_substr(char *s, unsigned int start, size_t len)
{
    size_t      idx;
    char        *result;
    size_t      s_len = _strlen(s);

    if ((s == NULL) || (start > (s_len)))
        return (NULL);
    if (len > s_len)
        len = s_len;

    result = (char*) (malloc((sizeof(char) * (len + 1))));
    if (result == NULL)
        return NULL;

    idx = 0;
    while (start < len)
    {
        result[idx] = s[start];
        idx++;
        start++;
    }
    result[idx] = '\0';
    return result;
}
