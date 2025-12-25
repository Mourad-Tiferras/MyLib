#include "mylib.hpp"


static int	trim_check(std::string &set, char caracter)
{
	size_t	idx;

	idx = 0;
	while (idx < set.length())
	{
		if (set[idx] == caracter)
			return (1);
		idx++;
	}
	return (0);
}


/**
 * _strtrim - Trims characters from the beginning and end of a string
 * @str: Input string
 * @set: Characters to trim
 *
 * Return: Trimmed string
 */
std::string _strtrim(std::string &str, std::string &set)
{
    size_t      start;
    size_t      end;

    start = 0;
    if (set.empty() || str.empty())
        return str;

    while (start < str.length() && trim_check(set, str[start]))
        start++;

    if (start == str.length())
        return "";

    end = str.length() - 1;
    while (end > start && trim_check(set, str[end]))
        end--;

    return (_substr(str, start, ((end - start) + 1)));
}

// #include <iostream>

// int main(void)
// {
//     std::string     str, set;

//     str = "ababababHelloabababab";
//     set = "ab";

//     std:: cout << _strtrim(str, set) << "\n";
    
//     return 0;
// }