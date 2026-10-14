# C++98 Notes for Module 00

## What matters here
- Compile with `c++ -Wall -Wextra -Werror` and make sure it still builds with `-std=c++98`.
- Use C++-style I/O: `std::cout`, `std::cin`, `std::string`, `std::endl`.
- Avoid `printf`, `malloc`, `free`, and external libraries.
- Do not use `using namespace std;`.
- In Module 00, keep things simple: no STL containers or algorithms.

## Style that fits C++98
- Prefer `++i` over `i++` in loops.
- Use `static_cast<type>(value)` instead of C-style casts when possible.
- Include the headers you actually use, such as `<iostream>`, `<string>`, and `<cctype>`.
- Use `const` whenever a value should not change.
- Prefer `std::string` over manual character array handling when possible.

## Important note for `toupper`
- `toupper` expects an `unsigned char` value or `EOF`.
- Safer form:

```cpp
std::cout << static_cast<char>(
    std::toupper(static_cast<unsigned char>(ch))
);
```

## Megaphone-specific reminder
- Do not modify `argv` directly unless you really need to.
- A more C++-ish approach is to copy each argument into a `std::string`, convert it, and print it.
- Print a space between arguments, and a newline at the end.

## Example implementation idea for Megaphone

```cpp
#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < ac; ++i)
    {
        std::string arg = av[i];

        for (std::string::size_type j = 0; j < arg.size(); ++j)
            std::cout << static_cast<char>(
                std::toupper(static_cast<unsigned char>(arg[j]))
            );

        if (i + 1 < ac)
            std::cout << ' ';
    }
    std::cout << std::endl;
    return 0;
}
```

### Why this is good
- It uses `std::string`, which is more C++-like than manual character editing.
- It avoids changing `argv`.
- It keeps the code easy to read.
- It follows the C++98 rules used in Module 00.

## Quick checklist
- Use `std::string` for text handling.
- Use `static_cast` for conversions.
- Keep code readable and simple.
- Stay within C++98 rules.
