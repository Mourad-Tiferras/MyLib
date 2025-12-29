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
    size_t i = 0;

    while (i < res.size())
    {
        if (res[i] >= 'a' && res[i] <= 'z')
        {
            if (res[i] > 'l')
                res[i] -= 14;
            else
                res[i] += 14;
        }
        else if (res[i] >= 'A' && res[i] <= 'Z')
        {
            if (res[i] > 'L')
                res[i] -= 14;
            else
                res[i] += 14;
        }
        i++;
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