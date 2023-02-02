#include <string>
#include <vector>
#include <iostream>

#include "movabletype.hpp"

void MovableType::Parse()
{
    size_t length = input.size();
    for (int i = 0; i < length; ++i)
    {
        std::cout << input[i] << std::endl;
    }
}
