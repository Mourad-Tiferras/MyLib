#include "mylib.hpp"

/**
 * _rev_ROT14 - Decrypts a ROT14 encrypted string
 * @str: ROT14 encrypted string
 *
 * Return: Decrypted ASCII string
 */
std::string _rev_ROT14(const std::string &str)
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

// int main(void)
// {
//     std::string     str = "OPQRopqr12345678";
//     std::cout << "The reverse ROT14 of the str OPQRopqr12345678 is " << _rev_ROT14(str) << "\n";
//     return 0;
// }