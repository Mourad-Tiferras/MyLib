#include "mylib.hpp"


std::string _substr(const std::string &str, size_t start, size_t len)
{
    size_t s_len = str.length();

    if (start >= s_len)
        return "";

    if (start + len > s_len)
        len = s_len - start;

    std::string result;
    size_t i = 0;

    while (i < len)
    {
        result += str[start + i];
        i++;
    }

    return result;
}



// #include <iostream>

// int main(void)
// {
//     std::string str = "Hello l3alaam\n";

//     std::cout << "Substr: " << _substr(str, 4, 8) << "\n";

//     return 0;
// }