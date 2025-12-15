#include "mylib.hpp"

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

std::string         _substr(const std::string& str, size_t start, size_t len)
{
    size_t          idx;
    std::string     result;
    size_t          s_len = _strlen(s);

    if ((s == NULL) || (start > (s_len)))
        return (NULL);
    if (len > s_len)
        len = s_len;

    result = (std::string) (malloc((sizeof(char) * (len + 1))));
    if (result == NULL)
        return NULL;

    idx = 0;
    while (start < len)
    {
        result[idx] = str[start];
        idx++;
        start++;
    }
    result[idx] = '\0';
    return result;
}



#include <iostream>

int		main(void)
{
	int		num;

	std:: string    str = "Hello l3alaam\n";

	std:: cout << "Substr \"Hello l3alaam\\n\" " << _substr(str, 4, 8) << " from Int to ASCII string\n";

    
	return 0;
}
