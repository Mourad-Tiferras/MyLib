#include "mylib.hpp"

std::string _ROT13(const std::string &str)
{
    std::string res = str;

    for (size_t i = 0; i < res.size(); i++)
    {
        if (res[i] >= 'a' && res[i] <= 'z')
            res[i] += (res[i] > 'm') ? -13 : 13;
        else if (res[i] >= 'A' && res[i] <= 'Z')
            res[i] += (res[i] > 'M') ? -13 : 13;
    }
    return res;
}

// #include <iostream>

// int     main(void)
// {
//     std::string     str = "ABCDEF123";
//     std::cout << "The Rot13 of " << str << _ROT13(str) << "\n";
//     return 0;
// }
