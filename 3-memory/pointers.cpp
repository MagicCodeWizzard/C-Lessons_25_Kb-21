#include <iostream>
#include <bitset>
#include <cstdlib>
#include <string>

const bool is_enabled = true;
const std::string my_string = "Hello my world!";

// const volatile 
// register

int main()
{
    int* p = nullptr;
    int** p_p = &p;
    
    std::cout << "Address of p -> " << &p << ", value -> " << p << std::endl;
    std::cout << "Address of p_p -> " << &p_p << ", value -> " << p_p << std::endl;
    
    int a = 10;
    
    *p_p = &a;
    
    std::cout << "++++++" << std::endl;
    std::cout << "Address of p -> " << &p << ", value -> " << p << std::endl;
    std::cout << "Address of p_p -> " << &p_p << ", value -> " << p_p << std::endl;
    
    std::cout << "++++++" << std::endl;
    
    std::cout << a << std::endl;
    *p = 70;
    std::cout << a << std::endl;
    *(*p_p) = 80;
    std::cout << a << std::endl;
    
    a = 90;
    
    std::cout << a << std::endl;
    std::cout << *p << std::endl;
    std::cout << *(*p_p) << std::endl;
    
    double value1 = 90.5;
    double value2 = 100.7;
    
    double* v = nullptr;
    double* const v1 = &value2;
    const double* const v2 = &value2;
    
    *v = 34;
    
    std::cout << *v << std::endl;
    
    v = &value1;
    value1 = 77.4;
    
    //*v = 66.4;
    
    std::cout << "value2 -> " << value2 << std::endl;
    *v1 = 111.666;
    std::cout << "value2 -> " << value2 << std::endl;
    
    return 0;
}
