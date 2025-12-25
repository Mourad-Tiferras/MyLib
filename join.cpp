#include "mylib.hpp"

/**
 * _strjoin - Concatenates two strings into a new string
 * @s1: First string
 * @s2: Second string
 *
 * Return: Concatenated string
 */
std::string _strjoin(const std::string &s1, const std::string &s2)
{
    std::string    result;

    result = s1 + s2;
    return (result);
}

// #include <iostream>

// int main()
// {
//     std::string s1 = "Hello ";
//     std::string s2 = "L3alaaaam";

//     std:: cout << _strjoin(s1, s2) << "\n";
//     return 0;
// }