#ifndef MYLIB_HPP
#define MYLIB_HPP


# include <stdlib.h>
# include <string.h>
# include <string>


char            *_itoa(int   num);
std::string     _substr(const std::string &str, size_t start, size_t len);
std::string     _strtrim(std::string &str, std::string &set);
std::string     _strjoin(const std::string &s1, const std::string &s2);
char            **_split(char const *s, char c);
std::string     _ROT13(const std::string &str);
std::string     _ROT14(const std::string &str);
std::string     _rev_ROT13(const std::string &str);
std::string     _rev_ROT14(const std::string &str);
std::string     _leet(const std::string &str);


#endif
