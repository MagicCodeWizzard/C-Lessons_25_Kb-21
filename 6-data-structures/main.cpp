#include <cstdlib>
#include <cstring>
#include <iostream>

#include "my-types.hpp"

void string_operations()
{
    char a[10];
    char* a_p = a;

    std::cout << "Hello world!" << std::endl;
    std::cout << "\t\nHello world!" << std::endl;

    a_p = "Bye bye bye!!!";
    std::cout << "First len: " << std::strlen(a_p) << std::endl;

    a_p = "Bye bye\0 bye!!!";
    std::cout << "Second len:" << std::strlen(a_p) << std::endl;
}

void custom_types()
{
    MyCustomType variable;
    MyCustomType1 variable1;

    variable1.id = 45;
    variable1.is_active = true;
    variable1.description = "This is some creature!";

    std::cout << "Address of MyCustomType is " << std::hex << &variable << std::dec << std::endl;
    std::cout << variable1.id << " " << variable1.is_active << " " << variable1.description << std::endl;

    std::cout << "Address of MyCustomType1 is " << std::dec << &variable1 << 
          "\n id: " << &(variable1.id) <<
          "\n is_active: " << &(variable1.is_active) <<
          "\n description: " << &(variable1.description) <<
          "\n id_1: " << &(variable1.long_id) << std::endl;

    std::cout << "Size of MyCustomType1 -> " << sizeof(MyCustomType1) << std::endl;

    MyBitStructure my_bit;
    my_bit.field = 5;
    my_bit.another_field = 43;

    std::cout << "Size of MyBitStructure -> " << sizeof(MyBitStructure) << std::endl;
    std::cout << my_bit.another_field << std::endl;
}

int main()
{
    string_operations();
    custom_types();

    return 0;
}