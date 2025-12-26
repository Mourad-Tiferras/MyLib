#include "mylib.hpp"

/**
 * _ROT14 - Encrypts a string using ROT14 cipher
 * @str: Input string
 *
 * Return: ROT14 encrypted string
 */
std::string _ROT14(const std::string& str)
{
    std::string res = str;

    for (size_t i = 0; i < res.size(); i++)
    {
        if (res[i] >= 'a' && res[i] <= 'z')
            res[i] += (res[i] > 'l') ? -14 : 14;
        else if (res[i] >= 'A' && res[i] <= 'Z')
            res[i] += (res[i] > 'L') ? -14 : 14;
    }
    return res;
}

// #include <iostream>

// int     main(void)
// {
//     std::string str = "ABCDabcd12345678";

//     std:: cout << "The Rot14 of " << str << " is " << _ROT14(str) << "\n";
//     return 0;
// }