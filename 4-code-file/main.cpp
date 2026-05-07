#include <iostream>
#include <cstring>
#include <string.h>

#include "my-library.hpp"

int main(int argc, char* argv[])
{    
    std::cout << "Hello world" << std::endl;

    if (argc > 1) {
        if (strcmp("Hello", argv[1]) == 0) {
            std::cout << "You said 'Hello!'" << std::endl;
        }
    }

    printArray(argc, argv);
}