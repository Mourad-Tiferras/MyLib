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

## Example Usage

```cpp
#include "mylib.hpp"

int main() {
    std::string str = "  Hello World!  ";
    std::string trimmed = _strtrim(str, " ");
    std::cout << "Trimmed: '" << trimmed << "'" << std::endl;

    std::string rot = _ROT13("Hello");
    std::cout << "ROT13: " << rot << std::endl;

    return 0;
}
