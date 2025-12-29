#include "mylib.hpp"


/**
 * _leet - Converts a string to leet speak
 * @str: Input string
 *
 * Return: Leet (1337 5p34k) converted ASCII string
 */
std::string _leet(const std::string &str)
{
    std::string res = str;
    size_t i = 0;

    while (i < res.length())
    {
        if (res[i] == 'a' || res[i] == 'A')
            res[i] = '4';
        else if (res[i] == 'e' || res[i] == 'E')
            res[i] = '3';
        else if (res[i] == 'i' || res[i] == 'I')
            res[i] = '1';
        else if (res[i] == 'o' || res[i] == 'O')
            res[i] = '0';
        else if (res[i] == 't' || res[i] == 'T')
            res[i] = '7';
        else if (res[i] == 's' || res[i] == 'S')
            res[i] = '5';
        else if (res[i] == 'l' || res[i] == 'L')
            res[i] = '1';

        i++;
    }

    return res;
}

// #include <iostream>

// int main(void)
// {
//     std::string     str = "LEET_Speak\n";

//     std::cout << "The LEET encryption of LEET_Speak   is  " << _leet(str);
//     return 0;
// }