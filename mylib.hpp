#ifndef MYLIB_HPP
#define MYLIB_HPP


# include <stdlib.h>
# include <string.h>
# include <string>


char        *_itoa(int   num);
std::string _substr(const std::string &str, size_t start, size_t len);
std::string _strtrim(const std::string& str, const std::string& set);


#endif
