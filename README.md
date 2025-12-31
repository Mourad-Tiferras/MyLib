# MyLib - A Reusable C++ Static Library

## The Problem

Many C/C++ developers still face challenges in large projects, such as:

- Lack of built-in functions for common tasks like trimming, joining, or splitting strings.  
- Rewriting low-level code repeatedly instead of reusing a clean, centralized library.  
- Increased development time and reduced code organization.

## The Solution

The solution is **MyLib**: a reusable C++ collection of non-standard functions packaged as a **static library**.  

- **Target Users:** System developers, embedded system engineers, or anyone building large C++ projects.  
- **Features:** Extends basic C++ functionality with functions like string trimming, joining, splitting, and more.  
- **Quality & Safety:** All functions are coded securely to prevent overflows, underflows, use-after-free, memory leaks, and other common issues.  
- **Design:** Clean, well-documented, and easy to integrate into any project.

With MyLib, developers can **save time, improve code organization**, and **reuse robust utility functions** across multiple projects.

---

## Functions Overview

| Function | Description |
|----------|-------------|
| `_itoa` | Converts an integer to its string representation. |
| `_join` | Joins multiple strings into a single string. |
| `_leet` | Converts a string into "leet speak". |
| `_rot13` | Encodes a string using the ROT13 cipher. |
| `_rev_rot13` | Decodes a ROT13 encoded string. |
| `_rot14` | Encodes a string using ROT14 cipher. |
| `_rev_rot14` | Decodes a ROT14 encoded string. |
| `_split` | Splits a string into a vector of strings using a delimiter. |
| `_strtrim` | Trims specified characters from the start and end of a string. |
| `_substr` | Extracts a substring from a given string. |


## Example Usage

```cpp
#include <iostream>
#include "../mylib.hpp"
#include <cstdio>

int     main(void)
{
    std::string     str = "ABCD123";

    std::cout << "The ROT14 of the " << str << " is " << _ROT14(str) << "\n";



    const char*   str2 = "Hello L3alaam 123 abc";
    int     row = 0;

    printf("\nThe str to Split is \"%s\"  \n ", str2);

    char **result = _split(str2, ' ');

    while (result[row] != NULL)
    {
      printf("In row %d  =  %s\n", row, result[row]);
      row++;
    }

    while (row >= 0)
    {
      free(result[row]);
      row--;
    }

    free(result);
    return 0;
}
```
