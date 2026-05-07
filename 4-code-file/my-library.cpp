#include <iostream>

#include "my-library.hpp"

void printArray(unsigned int size, char* values[])
{
    for (unsigned int i = 0; i < size; i++) {
        std::cout << "Value -> " << values[i] << std::endl;
    }
}