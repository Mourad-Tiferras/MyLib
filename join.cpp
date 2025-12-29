#include "mylib.hpp"


/**
 * _strjoin - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a new string containing s1 followed by s2
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