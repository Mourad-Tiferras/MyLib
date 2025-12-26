#include "mylib.hpp"

/**
 * _rev_ROT13 - Decrypts a string encrypted with ROT13
 * @str: Input string
 *
 * Return: Original string
 */
std::string     _rev_ROT13(const std::string &str)
{
    std::string res = str;
    size_t i = 0;

    while (i < res.length())
    {
        if (res[i] >= 'a' && res[i] <= 'z')
        {
            if (res[i] > 'm')
                res[i] -= 13;
            else
                res[i] += 13;
        }
        else if (res[i] >= 'A' && res[i] <= 'Z')
        {
            if (res[i] > 'M')
                res[i] -= 13;
            else
                res[i] += 13;
        }
        i++;
    }

    return res;
}

// #include <iostream>

// int main(void)
// {
//     std::string     str = "NOPQRS123";
//     std::cout << "The reverse of ROT13 of " << str << " is " << _rev_ROT13(str) << "\n";
//     return 0;
// }