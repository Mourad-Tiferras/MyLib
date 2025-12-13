#include "mylib.h"
#include <iostream>




int     main(void)
{
    std::cout << _itoa(-1234567891) << "\n";

    char *str = "ABCDEFG123";
    char *r = _substr(str, 3, 8);
    std:: cout << r << "\n";

    return 0;
}
