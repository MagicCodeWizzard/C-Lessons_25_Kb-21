#include <iostream>
#include <bitset>
#include <cstdlib>

void unsigned_check()
{
    // Подання знакових і беззнакових типів в пам'яті
    unsigned int value = 0;
    
    
    std::cout << "Enter value: ";
    std::cin >> value;
    
    std::cout << "Value entered: " << value << std::endl;
    std::cout << "Value entered (integer): " << (int)value << std::endl;
    std::cout << "Value entered (integer): " << static_cast<int>(value) << std::endl;
    
    std::bitset<32> bit_value = value;
    std::cout << bit_value << std::endl;
}

int main()
{
    // unsigned_check();
    
    // Посилання та вказівники
    
    int a = 10;
    int* point = &a;
    
    const int b = 6;
    
    const int* point_1 = &a;
    const int* const point_1 = &a;
    
    int* const point_1 = &a;
    int& point2 = &a;
    
    const int& point2 = &a;
    
    point2 = 19;
    
    
    *(point) = 8;
    
    std::cout << &a << " = " << a << std::endl;
    std::cout << point << std::endl;
    std::cout << point << std::endl;
        
    return 0;
}
